#include <iostream>
#include "../include/BualiHospital.h"

BualiHospital::BualiHospital(int bedsCount) : Hospital(bedsCount){}

void BualiHospital::receiptPatient() {
    //if there is beds available and patient is waiting occupy a bed
    if (inBeds.size() < bedsCount && !waiting.empty()) {
        Patient *patient = waiting.front();
        waiting.pop();
        patient->setStartTime(currentTime);
        patient->setBedNumber(inBeds.size());
        inBeds.push_back(patient);
    }
}

void BualiHospital::releasePatient() {
    //check if patient is ready to release
    for (int i = 0; i < inBeds.size(); i++) {
        Patient* patient = inBeds[i];
        //if time elapsed equals to the time patient needs
        if (currentTime - patient->getStartTime() >= patient->getPrepareTime()) {
            patient->setEndTime(currentTime);
            inBeds.erase(inBeds.begin() + i);
            totalWaitTime += patient->getStartTime() - patient->getEnterTime();
            numReleased++;
            cout << "✨ The patient #" << patient->getPatientNumber() << " released from bed #" << patient->getBedNumber() << endl;
            delete patient;
            break;
        }
    }
}

void BualiHospital::checkPatientPatience() {
    for (int i = 0; i < waiting.size(); i++) {
        Patient* patient = waiting.front();
        if (currentTime - patient->getEnterTime() >= patient->getPatience()) {
            waiting.pop();
            patient->setAlive(false);
            numDied++;
            cout << "🪦 The patient #" << patient->getPatientNumber() << " died " << endl;
            delete patient;
        }
        else {
            waiting.pop();
            waiting.push(patient);
        }
    }
}

void BualiHospital::addPatient(int number, int enter, int prepare, int patience) {
    auto* patient = new Patient(number, enter, prepare, patience);
    waiting.push(patient);
}

void BualiHospital::simulate() {
    while (!waiting.empty() || !inBeds.empty()) {
        receiptPatient();
        releasePatient();
        checkPatientPatience();
        currentTime++;
    }

    cout << "Number of beds: " << bedsCount << endl;
    cout << "Average wait time: " << (double)totalWaitTime / numReleased << endl;
    cout << "Number of patients released: " << numReleased << endl;
    cout << "Number of patients died: " << numDied << endl;
}
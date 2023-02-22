#include <iostream>
#include "../include/ResalatHospital.h"

ResalatHospital::ResalatHospital(int bedsCount) : Hospital(bedsCount){}

void ResalatHospital::receiptPatient() {
    if (inBeds.size() < bedsCount && !priorityQueue.empty()) {
        Patient* p = priorityQueue.top().second;
        priorityQueue.pop();
        p->setPrepareTime(p->getPrepareTime()+currentTime);
        inBeds.push_back(p);
    }
    else if (!waiting.empty()) {
        Patient* p = waiting.front();
        waiting.pop();
        p->setPrepareTime(p->getPrepareTime()+currentTime);
        priorityQueue.push({p->getPrepareTime(), p});
    }
}

void ResalatHospital::releasePatient() {
    for (int i = 0; i < inBeds.size(); i++) {
        Patient* p = inBeds[i];
        if (p->getPrepareTime() <= currentTime) {
            inBeds.erase(inBeds.begin() + i);
            totalWaitTime += (currentTime - p->getEnterTime());
            numReleased++;
            delete p;
            i--;
        }
    }
}

void ResalatHospital::checkPatientPatience() {
    while (!priorityQueue.empty() && priorityQueue.top().first <= currentTime) {
        Patient* p = priorityQueue.top().second;
        priorityQueue.pop();
        p->setAlive(false);
        numDied++;
        delete p;
    }
}

void ResalatHospital::addPatient(int number, int enter, int prepare, int patience) {
    Patient* patient = new Patient(number, enter, prepare, patience);
    patients.push_back(patient);
}

void ResalatHospital::simulate() {
    for (int i = 0; i < patients.size(); i++) {
        Patient* p = patients[i];
        waiting.push(p);
    }

    currentTime = 0;
    while (!waiting.empty() || !inBeds.empty() || !priorityQueue.empty()) {
        checkPatientPatience();
        receiptPatient();
        releasePatient();
        currentTime++;
    }

    for (auto p : inBeds) {
        totalWaitTime += (currentTime - p->getEnterTime());
        numReleased++;
        delete p;
    }

    cout << "Number of beds: " << bedsCount << endl;
    cout << "Average wait time: " << (double)totalWaitTime / numReleased << endl;
    cout << "Number of patients released: " << numReleased << endl;
    cout << "Number of patients died: " << numDied << endl;
}
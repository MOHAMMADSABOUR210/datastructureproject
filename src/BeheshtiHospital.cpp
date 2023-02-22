#include <iostream>
#include "../include/BeheshtiHospital.h"

BeheshtiHospital::BeheshtiHospital(int bedsCount) : Hospital(bedsCount) {}

void BeheshtiHospital::receiptPatient() {
    while (!priorityQueue.empty() && priorityQueue.top().first <= waiting.front()->getPrepareTime()) {
        Patient *patient = priorityQueue.top().second;
        priorityQueue.pop();
        waiting.push(patient);
    }

    if (waiting.size() < bedsCount) {
        Patient *patient = waiting.front();
        waiting.pop();
        totalWaitTime += waiting.size() * patient->getPrepareTime();
        waiting.push(patient);
    }
}

void BeheshtiHospital::releasePatient() {

}

void BeheshtiHospital::checkPatientPatience() {
    while (!priorityQueue.empty() &&
           currentTime - priorityQueue.top().second->getEnterTime() >= priorityQueue.top().second->getPatience()) {
        numDied++;
        priorityQueue.pop();
    }
}

void BeheshtiHospital::addPatient(int number, int enter, int prepare, int patience) {
    Patient *patient = new Patient(number, enter, prepare, patience);
    patients.push_back(patient);
}

void BeheshtiHospital::simulate() {
    sort(patients.begin(), patients.end(), [](Patient *a, Patient *b) {
        if (a->getPrepareTime() == b->getPrepareTime()) {
            return a->getPatience() < b->getPatience();
        }
        return a->getPrepareTime() < b->getPrepareTime();
    });

    for (Patient *patient : patients) {
        while (!waiting.empty() && currentTime - waiting.front()->getEnterTime() >= waiting.front()->getPrepareTime()) {
            waiting.pop();
            numReleased++;
        }

        checkPatientPatience();

        if (waiting.size() >= bedsCount) {
            priorityQueue.push(make_pair(waiting.front()->getPrepareTime(), waiting.front()));
            waiting.pop();
        }

        waiting.push(patient);

        receiptPatient();

        currentTime++;
    }

    while (!waiting.empty()) {
        waiting.pop();
        numReleased++;
    }

    checkPatientPatience();

    cout << "Number of patients released: " << numReleased << endl;
    cout << "Number of patients died: " << numDied << endl;
    if (numReleased > 0) {
        cout << "Average wait time for a bed: " << totalWaitTime << endl;
    }
}
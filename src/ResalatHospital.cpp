#include <iostream>
#include "../include/ResalatHospital.h"

ResalatHospital::ResalatHospital(int bedsCount) : Hospital(bedsCount) {}

void ResalatHospital::receiptPatient() {
    //if there are beds available and priority queue filled
    if (inBeds.size() < bedsCount && !priorityQueue.empty()) {
        Patient *p = priorityQueue.top().second;
        priorityQueue.pop();
        p->setStartTime(currentTime);
        inBeds.push_back(p);
    } else if (!waiting.empty()) {
        Patient *p = waiting.front();
        waiting.pop();
        p->setStartTime(currentTime);
        priorityQueue.push({p->getPrepareTime(), p});
    }
}

void ResalatHospital::releasePatient() {
    for (int i = 0; i < inBeds.size(); i++) {
        Patient *p = inBeds[i];
        if (currentTime - p->getStartTime() >= p->getPrepareTime()) {
            inBeds.erase(inBeds.begin() + i);
            totalWaitTime += (currentTime - p->getEnterTime());
            numReleased++;
            delete p;
            break;
        }
    }
}

void ResalatHospital::checkPatientPatience() {
    while (!priorityQueue.empty() &&
           currentTime - priorityQueue.top().second->getEnterTime() >= priorityQueue.top().second->getPatience()) {
        Patient *p = priorityQueue.top().second;
        priorityQueue.pop();
        p->setAlive(false);
        numDied++;
        delete p;
    }
}

void ResalatHospital::addPatient(int number, int enter, int prepare, int patience) {
    //add all patients in waiting queue first
    auto *patient = new Patient(number, enter, prepare, patience);
    waiting.push(patient);
}

void ResalatHospital::simulate() {
    while (!waiting.empty() || !inBeds.empty() || !priorityQueue.empty()) {
        receiptPatient();
        releasePatient();
        checkPatientPatience();
        currentTime++;
    }

    cout << "Number of beds: " << bedsCount << endl;
    cout << "Average wait time: " << (double) totalWaitTime / numReleased << endl;
    cout << "Number of patients released: " << numReleased << endl;
    cout << "Number of patients died: " << numDied << endl;
}
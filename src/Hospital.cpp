#include <iostream>
#include "../include/Hospital.h"

Hospital::Hospital(int bedsCount) : bedsCount(bedsCount) {

}

void Hospital::receiptFcfsOrder() {
    std::queue<Patient> q;
    for (auto patient : patients) {
        q.push(patient);
    }
    while (!q.empty()) {
        Patient p = q.front();
        q.pop();
        std::cout << "Patient " << p.getPatientNumber() << " entered hospital at " << p.getEnterTime() << std::endl;
    }
}

void Hospital::receiptPatient(Patient patient) {
    patients.push_back(patient);
}

void Hospital::receiptSfjOrder() {
    sort(patients.begin(), patients.end(), [](const Patient &p1, const Patient &p2) {
        return p1.getPrepareTime() < p2.getPrepareTime();
    });
    for (auto &patient : patients) {
        std::cout << "Patient " << patient.getPatientNumber() << " prepared in " << patient.getPrepareTime()
                  << " minutes"
                  << std::endl;
    }
}

void Hospital::receiptPriorityScheduling() {

}

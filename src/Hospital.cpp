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

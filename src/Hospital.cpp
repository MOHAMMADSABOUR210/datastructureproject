#include "../include/Hospital.h"

const std::queue<Patient> &Hospital::getFcfs() const {
    return fcfs;
}

Hospital::Hospital(int bedsCount, const std::vector<Patient> &patients) : bedsCount(
        bedsCount), patients(patients) {
    for (auto it = patients.end() -1; it == patients.begin(); --it) {

    }
}
#ifndef HOSPITAL_HOSPITAL_H
#define HOSPITAL_HOSPITAL_H

#include <vector>
#include <queue>
#include "Patient.h"

class Hospital {
private:
    const int bedsCount;
    const std::vector<Patient> patients;
    std::queue<Patient> fcfs;
public:
    const std::queue<Patient> &getFcfs() const;

    Hospital(int bedsCount, const std::vector<Patient> &patients);
};


#endif //HOSPITAL_HOSPITAL_H

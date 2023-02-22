#ifndef HOSPITAL_HOSPITAL_H
#define HOSPITAL_HOSPITAL_H

#include <vector>
#include <queue>
#include "Patient.h"

class Hospital {
private:
    const int bedsCount;
    std::vector<Patient> patients;
public:
    Hospital(int bedsCount);

    void receiptPatient(Patient patient);

    void receiptFcfsOrder();

    void receiptSfjOrder();

    void receiptPriorityScheduling();
};


#endif //HOSPITAL_HOSPITAL_H

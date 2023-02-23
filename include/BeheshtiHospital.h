#ifndef HOSPITAL_BEHESHTIHOSPITAL_H
#define HOSPITAL_BEHESHTIHOSPITAL_H

#include "Hospital.h"

class BeheshtiHospital : public Hospital {
private:
    priority_queue<Patient *> priorityQueue;
    int current_patients{};
public:
    BeheshtiHospital(int bedsCount);

    void receiptPatient() override;

    void releasePatient() override;

    void checkPatientPatience() override;

    void addPatient(int number, int enter, int prepare, int patience) override;

    void simulate() override;
};


#endif //HOSPITAL_BEHESHTIHOSPITAL_H

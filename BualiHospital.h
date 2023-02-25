#ifndef HOSPITAL_BUALIHOSPITAL_H
#define HOSPITAL_BUALIHOSPITAL_H

#include "Hospital.h"

using namespace std;

class BualiHospital : public Hospital{
public:
    BualiHospital(int bedsCount);

    void receiptPatient() override;

    void releasePatient() override;

    void checkPatientPatience() override;

    void addPatient(int number, int enter, int prepare, int patience) override;

    void simulate() override;
};


#endif //HOSPITAL_BUALIHOSPITAL_H

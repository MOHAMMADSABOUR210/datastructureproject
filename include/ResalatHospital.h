#ifndef HOSPITAL_RESALATIHOSPITAL_H
#define HOSPITAL_RESALATIHOSPITAL_H

#include "Hospital.h"

using namespace std;

class ResalatHospital : public Hospital {
private:
    vector<Patient *> patients;
    priority_queue<pair<int, Patient *>, vector<pair<int, Patient *>>, greater<pair<int, Patient *>>> priorityQueue;
public:
    ResalatHospital(int bedsCount);

    void receiptPatient() override;

    void releasePatient() override;

    void checkPatientPatience() override;

    void addPatient(int number, int enter, int prepare, int patience) override;

    void simulate() override;
};


#endif //HOSPITAL_RESALATIHOSPITAL_H

#ifndef HOSPITAL_HOSPITAL_H
#define HOSPITAL_HOSPITAL_H

#include <vector>
#include <queue>
#include <algorithm>
#include "Patient.h"

using namespace std;

class Hospital {
protected:
    int bedsCount;
    queue<Patient *> waiting;
    vector<Patient *> inBeds;
    int currentTime;
    int totalWaitTime;
    int numReleased;
    int numDied;
public:
    explicit Hospital(int bedsCount);

    virtual void receiptPatient() = 0;

    virtual void releasePatient() = 0;

    virtual void checkPatientPatience() = 0;

    virtual void addPatient(int number, int enter, int prepare, int patience) = 0;

    virtual void simulate() = 0;
};


#endif //HOSPITAL_BUALIHOSPITAL_H

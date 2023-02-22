#ifndef HOSPITAL_PATIENT_H
#define HOSPITAL_PATIENT_H


class Patient {
private:
    int patient_number;
    int enter_time;
    int prepare_time;
    int patience;
public:
    Patient( int patientNumber,  int enterTime,  int prepareTime,  int patience);

    int getPatientNumber() const;

    int getEnterTime() const;

    int getPrepareTime() const;

    int getPatience() const;
};

#endif
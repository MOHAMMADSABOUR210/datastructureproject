#ifndef HOSPITAL_PATIENT_H
#define HOSPITAL_PATIENT_H


class Patient {
private:
    const int patient_number;
    const int enter_time;
    const int prepare_time;
    const int patience;
public:
    Patient(const int patientNumber, const int enterTime, const int prepareTime, const int patience);

    int getPatientNumber() const;

    int getEnterTime() const;

    int getPrepareTime() const;

    int getPatience() const;
};

#endif
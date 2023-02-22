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

    const int getPatientNumber() const;

    const int getEnterTime() const;

    const int getPrepareTime() const;

    const int getPatience() const;
};

#endif
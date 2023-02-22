#include "../include/Patient.h"

Patient::Patient(const int patientNumber, const int enterTime, const int prepareTime, const int patience)
        : patient_number(patientNumber), enter_time(enterTime), prepare_time(prepareTime), patience(patience) {}

const int Patient::getPatientNumber() const {
    return patient_number;
}

const int Patient::getEnterTime() const {
    return enter_time;
}

const int Patient::getPrepareTime() const {
    return prepare_time;
}

const int Patient::getPatience() const {
    return patience;
}

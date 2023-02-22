#include "../include/Patient.h"

Patient::Patient(int patientNumber, int enterTime, int prepareTime, int patience)
        : patient_number(patientNumber), enter_time(enterTime), prepare_time(prepareTime), patience(patience) {}

int Patient::getPatientNumber() const {
    return patient_number;
}

int Patient::getEnterTime() const {
    return enter_time;
}

int Patient::getPrepareTime() const {
    return prepare_time;
}

int Patient::getPatience() const {
    return patience;
}

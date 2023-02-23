#include "../include/Patient.h"

Patient::Patient(int number, int enter, int prepare, int patience) {
    this->patient_number = number;
    this->enter_time = enter;
    this->prepare_time = prepare;
    this->patience = patience;
    this->start_time = -1;
    this->end_time = -1;
    this->alive = true;
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

void Patient::setStartTime(int startTime) {
    start_time = startTime;
}

void Patient::setEndTime(int endTime) {
    end_time = endTime;
}

void Patient::setAlive(bool alive) {
    Patient::alive = alive;
}

int Patient::getStartTime() const {
    return start_time;
}

void Patient::setPatientNumber(int patientNumber) {
    patient_number = patientNumber;
}

void Patient::setEnterTime(int enterTime) {
    enter_time = enterTime;
}

void Patient::setPrepareTime(int prepareTime) {
    prepare_time = prepareTime;
}

void Patient::setPatience(int patience) {
    Patient::patience = patience;
}

int Patient::getPatientNumber() const {
    return patient_number;
}

int Patient::getBedNumber() const {
    return bed_number;
}

void Patient::setBedNumber(int bedNumber) {
    bed_number = bedNumber;
}

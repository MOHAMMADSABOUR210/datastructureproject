#ifndef HOSPITAL_PATIENT_H
#define HOSPITAL_PATIENT_H


class Patient {
private:
    int patient_number;
    int enter_time;
    int prepare_time;
    int patience;
    int start_time;
    int end_time;
    bool alive;
    int wait_time;
public:

    int getWaitTime() const;

    void setWaitTime(int waitTime);

    void setPatientNumber(int patientNumber);

    void setEnterTime(int enterTime);

    void setPrepareTime(int prepareTime);

    void setPatience(int patience);

    Patient(int number, int enter, int prepare, int patience);

    int getEnterTime() const;

    int getPrepareTime() const;

    int getPatience() const;

    int getStartTime() const;

    void setStartTime(int startTime);

    void setEndTime(int endTime);

    void setAlive(bool alive);
};

#endif
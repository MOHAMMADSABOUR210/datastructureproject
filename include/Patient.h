#ifndef HOSPITAL_PATIENT_H
#define HOSPITAL_PATIENT_H


class Patient {
private:
    int patient_number;
    int bed_number;
    int enter_time;
    int prepare_time;
    int patience;
    int start_time;
    int end_time;
    bool alive;
public:
    int getBedNumber() const;

    void setBedNumber(int bedNumber);

    int getPatientNumber() const;

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

    bool operator<(const Patient &other) const {
        if (prepare_time != other.prepare_time)
            return prepare_time > other.prepare_time;
        else
            return patience > other.patience;
    }
};

#endif
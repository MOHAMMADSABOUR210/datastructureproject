#include "../include/Hospital.h"

Hospital::Hospital(int bedsCount) : bedsCount(bedsCount) {
    currentTime = 0;
    totalWaitTime = 0;
    numReleased = 0;
    numDied = 0;
}
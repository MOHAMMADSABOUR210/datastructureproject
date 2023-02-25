#include <iostream>

#include "include/BualiHospital.h"
#include "include/ResalatHospital.h"
#include "include/BeheshtiHospital.h"

int main() {
    Hospital * basu = new ResalatHospital(2);
    basu->addPatient(1, 0, 3, 10);
    basu->addPatient(2, 0, 3, 7);
    basu->addPatient(3, 1, 2, 5);
    basu->addPatient(4, 1, 5, 11);
    basu->addPatient(5, 2, 3, 6);
    basu->simulate();
    return 0;
}

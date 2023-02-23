#include <iostream>

#include "include/BualiHospital.h"
#include "include/ResalatHospital.h"
#include "include/BeheshtiHospital.h"

int main() {
    Hospital * basu = new BeheshtiHospital(1);
    basu->addPatient(1, 0, 3, 1);
    basu->addPatient(2, 0, 3, 1);
    basu->addPatient(3, 1, 2, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(4, 1, 1, 1);
    basu->addPatient(5, 2, 3, 1);
    basu->simulate();
    return 0;
}

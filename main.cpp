#include <iostream>

#include "include/BualiHospital.h"

int main() {
    BualiHospital basu = BualiHospital(1);
    basu.addPatient(1, 0, 3, 1);
    basu.addPatient(2, 0, 3, 1);
    basu.addPatient(3, 1, 2, 1);
    basu.addPatient(4, 1, 1, 1);
    basu.addPatient(5, 2, 3, 1);
    basu.simulate();
//    std::cout << "🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥"<< std::endl ;
//    basu.receiptSfjOrder();
//    std::cout << "🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥"  << std::endl;
//    basu.receiptPriorityScheduling();
    return 0;
}

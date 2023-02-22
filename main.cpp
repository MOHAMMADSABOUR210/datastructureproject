#include <iostream>

#include "include/Hospital.h"

int main() {
    Hospital basu = Hospital(10);
    basu.receiptPatient(Patient(1, 0, 3, 10));
    basu.receiptPatient(Patient(2, 0, 3, 7));
    basu.receiptPatient(Patient(3, 1, 2, 5));
    basu.receiptPatient(Patient(4, 1, 5, 11));
    basu.receiptPatient(Patient(5, 2, 3, 6));
    basu.receiptFcfsOrder();
    std::cout << "🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥"<< std::endl ;
    basu.receiptSfjOrder();
    std::cout << "🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥🏥"  << std::endl;
    basu.receiptPriorityScheduling();
    return 0;
}

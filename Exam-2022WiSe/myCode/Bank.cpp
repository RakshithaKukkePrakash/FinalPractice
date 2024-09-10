#include "Bank.h"
using namespace std;
//Customer* Bank::createCustomer() {
//    Customer* cptr1= nullptr;
//
//    this->customers.insert(make_pair(nextCustomerNumber, move(cObj)));
//    nextCustomerNumber++;
//
//    return cptr1;
//
//}

Customer* Bank::lookupCustomer(std::string id) const {
    Customer* cptr= nullptr;
    for(auto& cust: customers){
        if(id == cust.first)
        {
            cptr = cust.second.get();
        }
    }
    return cptr;
}

std::vector<Customer*> Bank::allCustomers() const {
    std::vector<Customer*> cVect;
    for(auto& cust: customers){
        cVect.push_back(cust.second.get());
    }

    return cVect;
}

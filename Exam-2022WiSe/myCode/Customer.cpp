#include "Customer.h"
using namespace std;
Customer::Customer(unsigned int number): number(number) {
}

unsigned int Customer::getNumber() const {
    return this->number;
}

std::string Customer::getId() const {
    ostringstream oss;
    oss << setw(10) << setfill('0') << getNumber();
    return oss.str();
}

Customer* Customer::setPersonalData(std::string lastName, std::string firstName,
        Poco::Data::Date dateOfBirth) {
    Customer* cPers;
    this->firstName = firstName;
    this->lastName = lastName;
    this->dateOfBirth = dateOfBirth;
    return cPers;
}

const Poco::Data::Date& Customer::getDateOfBirth() const {
    return this->dateOfBirth;
}

const std::string& Customer::getFirstName() const {
    return this ->firstName;
}

const std::string& Customer::getLastName() const {
    return this->lastName;
}

Account* Customer::createAccount(Bank::AccountType type) {
    Account* acc;
    if(type == Bank::CD){

    }


    return acc;
}

//std::vector<Account*> Customer::allAccounts() const {
//}
//
//Account* Customer::lookupAccount(std::string id) const {
//}
//
//void Customer::deleteAccount(std::string id) {
//}
//
//std::ostream& operator <<(std::ostream &out, const Customer &customer) {
//}

#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}

//void Account::print(std::ostream& os) const //why add override will cause error?
//{
//    //display(const std::vector<Account*> & accounts)
//    os << "account class print"
//        << "too difficult" << std::endl; //possible bug to add endl
//}

//virtual bool Account::deposit(double amount) {  ----- why?/???
bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}
//
//std::ostream &operator<<(std::ostream &os, const Account &account) {
//    os << "[Account: " << account.name << ": " << account.balance << "]";
//    return os;
//}

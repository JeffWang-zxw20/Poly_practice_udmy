#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

void Checking_Account::print(std::ostream& os) const //why add override will cause error?
{
    //display(const std::vector<Account*> & accounts)
    os << name << "'s Checking account. Balance now is: "
        << balance << std::endl; //possible bug to add endlS
}
bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}

//std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
//    os << "[Checking_Account: " << account.name << ": " << account.balance  << "]";
//    return os;
//}


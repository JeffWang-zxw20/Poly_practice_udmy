#include <iostream>
#include "Account_Util.h"

 //Displays Account objects in a  vector of Account objects 
void display(const std::vector<Account*> &accounts) {
    std::cout << "\n=== Accounts_display_method===========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << *acc << std::endl;  ///must be *acc rather than acc since they are pointers.
}                                           //can't be &acc as this is accessing the address of the pointer
                                            //which gives sth unwanted.

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  { //for (auto acc:accounts) also works 
        //if (acc->deposit(amount))   //acc.deposit is wrong as acc is a pointer
        if ((*acc).deposit(amount)) //should also works, try---- yes worked
            std::cout << "Group Deposited " << amount << " to " << *acc
                      <<  std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Deposits supplied amount to one Account object in the vector
void deposit(Account* &acc_pointer_address, double amount)
{
    if ((*acc_pointer_address).deposit(amount))
        std::cout << "Individual deposited " << amount << " to " 
        << *acc_pointer_address
        << std::endl;
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc->withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}

// Withdraw amount from one Account object in the vector
void withdraw(Account* &acc, double amount) {
    std::cout << "\n=== Withdrawing from one Accounts ==============================" << std::endl;

        if (acc->withdraw(amount))
            std::cout << "Indiviual Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    }


// Helper functions for Savings Account class
/*
// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts=====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts=======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// Helper functions for Checking Account class

// Displays Checking Account objects in a  vector of Checking Account objects 
void display(const std::vector<Checking_Account> &accounts) {
    std::cout << "\n=== Checking Accounts=====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Checking Account object in the vector
void deposit(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Checking Accounts===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Checking Account object in the vector
void withdraw(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking Accounts=======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// Helper functions for Trust Account class

// Displays Trust Account objects in a  vector of Trust Account objects 
void display(const std::vector<Trust_Account> &accounts) {
    std::cout << "\n=== Trust Accounts=====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Trust Accounts===========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Trust Account object in the vector
void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Trust Accounts=======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}
*/
// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "Interface.h"
//#include "Account_Util.h"
class Account :public I_prt
{
//class Account {
    //friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:    
    Account(std::string name = def_name, double balance = def_balance);
    //bool deposit(double amount);
    //bool withdraw(double amount);
    virtual bool deposit(double amount);  
    virtual bool withdraw(double amount);

    //virtual void print(std::ostream& os) const override; // --- cause error
    //virtual void print(std::ostream& os) const=0;     // no error caused --- works fine even when this is removed.


    ///must override all pure abstract func to make this class non abstract?
    /// but this class can still be abstract as i am not going to create a
    /// an obj of it?
    /// so doesn't matter?
};
#endif
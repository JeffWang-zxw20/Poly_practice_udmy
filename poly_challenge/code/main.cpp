// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
//#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    //cout.precision(2);
    //cout << fixed;
   
    //// Accounts
    //vector<Account> accounts;
    //accounts.push_back(Account {});
    //accounts.push_back(Account {"Larry"});
    //accounts.push_back(Account {"Moe", 2000} );
    //accounts.push_back(Account {"Curly", 5000} );
    //
    //display(accounts);
    //deposit(accounts, 1000);
    //withdraw(accounts,2000);
    //
    


    // Savings 

    //vector<Savings_Account> sav_accounts;
    //sav_accounts.push_back(Savings_Account {} );
    //sav_accounts.push_back(Savings_Account {"Superman"} );
    //sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    //sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    
    Account* s1 = new Savings_Account{};
    Account* s2 = new Savings_Account{ "Superman" };
    Account* s3 = new Savings_Account{ "Batman",2000 };
    Account* s4 = new Savings_Account{ "Wonderwoman", 5000, 5.0 };
    std::vector<Account *> sav_accounts{ s1,s2,s3,s4 };

    Account* c1 = new Checking_Account{};
    Account* c2 = new Checking_Account{ "Supermanc" };
    Account* c3 = new Checking_Account{ "Batmanc",2000 };
    Account* c4 = new Checking_Account{ "Wonderwomanc", 5000 };
    std::vector<Account*> che_accounts{ c1,c2,c3,c4 };
 
    Account* t1 = new Trust_Account{};
    Account* t2 = new Trust_Account{ "Athos", 10000, 5.0 };
    Account* t3 = new Trust_Account{ "Porthos", 20000, 4.0 };
    Account* t4 = new Trust_Account{ "Aramis", 30000 };
    std::vector<Account*> trust_accounts{ t1,t2,t3,t4 };

    for (const auto sav_acc : sav_accounts)
    {
        std::cout << *sav_acc << std::endl;
    }

    for (const auto che_acc : che_accounts)
    {
        std::cout << *che_acc << std::endl;
    }

    for (const auto t_acc : trust_accounts)
    {
        std::cout << *t_acc << std::endl;
    }
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    deposit(s1, 100000);
    withdraw(sav_accounts, 2000);
    withdraw(s2, 2000);
    withdraw(s1, 2000);

    display(che_accounts);
    deposit(che_accounts, 1000);
    deposit(c1, 100000);
    withdraw(che_accounts, 2000);
    withdraw(c2, 2000);
    withdraw(c1, 2000);

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(t1, 100000);
    withdraw(trust_accounts, 2000);
    withdraw(t2, 2000);
    withdraw(t1, 2000);




    /* Checking*/
    //Account* c1 = new Checking_Account{};
    //Account* c2 = new Checking_Account{ "Kirk" };
    //Account* c3 = new Checking_Account{ "Spock", 2000 };
    //Account* c4 = new Checking_Account{ "Bones", 5000 };
    ///*vector<Checking_Account> check_accounts;
    //check_accounts.push_back(Checking_Account {} );
    //check_accounts.push_back(Checking_Account {"Kirk"} );
    //check_accounts.push_back(Checking_Account {"Spock", 2000} );
    //check_accounts.push_back(Checking_Account {"Bones", 5000} );*/
    //std::vector<Account*> che_accounts{ c1,c2,c3,c4 };
    ///*display(check_accounts);
    //deposit(check_accounts, 1000);
    //withdraw(check_accounts, 2000);*/

    //// Trust
    //Account* t1 = new Trust_Account{};
    //Account* t2 = new Trust_Account{ "Athos",10000,5.0};
    //Account* t3 = new Trust_Account{ "Porthos", 20000,4.0 };
    //Account* t4 = new Trust_Account{ "Aramis", 30000 };
    //std::vector<Account*> tru_accounts{ t1,t2,t3,t4};
    ///*vector<Trust_Account> trust_accounts;
    //trust_accounts.push_back(Trust_Account {} );
    //trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
    //trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
    //trust_accounts.push_back(Trust_Account {"Aramis", 30000} );

    //display(trust_accounts);
    //deposit(trust_accounts, 1000);
    //withdraw(trust_accounts, 3000);*/
    //
    //// Withdraw 5 times from each trust account
    //// All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    //for (int i=0; i<4; i++)
    //   // withdraw(&tru_accounts.at(i), 1000);
    //
    delete s1;
    delete s2;
    delete s3;
    delete s4;

    delete c1;
    delete c2;
    delete c3;
    delete c4;

    delete t1;
    delete t2;
    delete t3;
    delete t4;
    return 0;
}


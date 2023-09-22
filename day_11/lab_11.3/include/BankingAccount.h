

#ifndef BANKINGACCOUNT_H_
#define BANKINGACCOUNT_H_

#include<string>
using namespace std;

class BankingAccount{


private:
    int	accountNumber;
    string accountHolderName;
    double balance;

public:

    BankingAccount (string name,int accountNumber);
    void  deposit ();
    void withdraw ();
	void  displayAccountDetails();
};



#endif /* BANKINGACCOUNT_H_ */

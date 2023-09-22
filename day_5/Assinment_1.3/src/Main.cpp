#include<iostream>
#include<string>
using namespace std;

class BankingAccount{


private:
    int	accountNumber;
    string accountHolderName;
    double balance;

public:

    BankingAccount (string name,int accountNumber){
    		this->accountHolderName=name;
    		this->accountNumber=accountNumber;
    		this->balance=0;
    		//void displayAccountDetails();
    	};

    void deposit (){
    	cout << "MONEY TO DEPOSIT : "<< endl;
    	cin>> balance;
    };

    void withdraw (){
    	cout << "WITHDRAW AMOUNT : "<<endl;
    	double withdraw;
    	cin >>withdraw ;

    	this->balance = this->balance-withdraw;
    };
    void displayAccountDetails(){
    	cout << "ACCOUNT HOLDER NAME : "<< accountHolderName <<endl;
    	cout << "ACCOUNT NUMBER : "<< accountNumber << endl;
    	cout << "BALANCE : "<< balance << endl;
    }


};


int main(void){

	BankingAccount a1("Aniket", 1001);
	a1.displayAccountDetails();
	a1.deposit();
	a1.displayAccountDetails();
	a1.withdraw();
	a1.displayAccountDetails();

	return 0;

}

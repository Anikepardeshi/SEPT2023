#include<iostream>
#include<string>
#include"../include/BankingAccount.h"
using namespace std;


int main(void){

	BankingAccount a1("Aniket", 1001);
	a1.displayAccountDetails();
	a1.deposit();
	a1.displayAccountDetails();
	a1.withdraw();
	a1.displayAccountDetails();

	return 0;

}

BankingAccount ::BankingAccount (string name,int accountNumber){
   		this->accountHolderName=name;
   		this->accountNumber=accountNumber;
   		this->balance=0;
   		//void displayAccountDetails();
   	};


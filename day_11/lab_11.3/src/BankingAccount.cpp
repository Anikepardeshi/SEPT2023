
#include"../include/BankingAccount.h"

#include<iostream>

using namespace std;


void BankingAccount:: deposit (){
   	cout << "MONEY TO DEPOSIT : "<< endl;
   	cin>> balance;
   };

   void BankingAccount::withdraw (){
   	cout << "WITHDRAW AMOUNT : "<<endl;
   	double withdraw;
   	cin >>withdraw ;

   	this->balance = this->balance-withdraw;
   };
   void BankingAccount:: displayAccountDetails(){
   	cout << "ACCOUNT HOLDER NAME : "<< accountHolderName <<endl;
   	cout << "ACCOUNT NUMBER : "<< accountNumber << endl;
   	cout << "BALANCE : "<< balance << endl;
   }

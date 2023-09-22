#include<iostream>
using namespace std;
int main (void){
	  int principal, time, rate, SI;


	    cout << "Enter the principal amount: ";
	    cin >> principal;
	    cout << "Enter the time period(in years): ";
	    cin >> time;
	    cout << "Enter the rate of interest: ";
	    cin >> rate;


	    SI = (principal*rate*time) / 100;


	    cout << "Simple Interest: " << SI << endl;



  return 0;
}

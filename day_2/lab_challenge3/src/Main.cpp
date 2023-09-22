


#include <iostream>
using namespace std;

int main (void){

	int num1, num2, sum;
	int*ptrnum1, *ptrnum2,*ptrsum;

	cout << "Input first number  :";
	cin >> num1;
	ptrnum1 = &num1;

	cout << "Input second number :";
	cin >> num2;
	ptrnum2 = &num2;

    ptrsum = &sum;
   *ptrsum = *ptrnum1 + *ptrnum2;

	cout << "sum of numbers is :" << *ptrsum;

	return 0;
}

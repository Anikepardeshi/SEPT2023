#i  nclude<iostream>
using namespace std;
int main (void){
	int num1, num2,*ptrnum1,*ptrnum2;
	*ptrnum1 = &num1;
	*ptrnum2 = &num2;
	cout << "Enter first number :";
	cin >> num1;


	cout << "Enter second number :";
    cin >> num2;

    cout << "before swap :" << *ptrnum1, *ptrnum2;


   *ptrnum1 = *ptrnum1 + *ptrnum2;
   *ptrnum2 = *ptrnum1 - *ptrnum2;
   *ptrnum1 = *ptrnum1 - *ptrnum2;

   cout << "after swap :" << *ptrnum1, *ptrnum2;

	return 0;
}

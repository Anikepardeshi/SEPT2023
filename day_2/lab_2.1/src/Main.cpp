#include<cstdio>

int main( void ){
 const int num1 = 10; //OK
 const int *const ptrNumber = &num1;
 //num1 = 50; //Not OK
 //*ptrNumber = 50; //Not OK:Dereferencing
 printf("Num1 : %d\n", num1); //10
 printf("Num1 : %d\n", *ptrNumber); //10: Dereferencing
 const int num2 = 20; //OK
 //ptrNumber = &num2; //Not OK
 return 0;
}


*
int main( void ){
 int num1 = 10;
 int *const ptrNumber = &num1;
 //num1 = 50; //OK
 *ptrNumber = 50;
 printf("Num1 : %d\n", num1); //50
 printf("Num1 : %d\n", *ptrNumber); //50: Dereferencing
 int num2 = 20;
 //ptrNumber = &num2; //Not OK
 return 0;
}
*/


*
int const *ptrNumber
const int *ptrNumber and int const *ptrNumber are same.
*/


*
int main( void ){
 const int *ptrNumber = NULL; //OK
 const int num1 = 10;
 ptrNumber = &num1; //OK
 //num1 = 50; //Not OK
 *ptrNumber = 50; //Not OK
 printf("Num1 : %d\n", num1); //10
 printf("Num1 : %d\n", *ptrNumber); //10: Dereferencing
 const int num2 = 20;
 ptrNumber = &num2; //OK
 //num2 = 60; //Not OK
 *ptrNumber = 60; //Not OK
 printf("Num2 : %d\n", num2); //20
 printf("Num2 : %d\n", *ptrNumber); //20: Dereferencing
 return 0;
}
*/


/*
int main( void ){
 int *ptrNumber = NULL;
 int num1 = 10;
 ptrNumber = &num1;
 //num1 = 50; //OK
 *ptrNumber = 50; //Dereferencing
 printf("Num1 : %d\n", num1); //50
 printf("Num1 : %d\n", *ptrNumber); //50: Dereferencing
 int num2 = 20;
 ptrNumber = &num2;
 //num2 = 60; //OK
 *ptrNumber = 60; //Dereferencing
 printf("Num2 : %d\n", num2); //60
 printf("Num2 : %d\n", *ptrNumber); //60:Dereferencing
 return 0;
}
*/


/*
int main( void ){
 const int number = 10; //Initialization
 printf("Number : %d\n", number); //10
 //number = number + 5; //Not OK
 return 0;
}
*/


/*
int main ( void ){
 int number = 10; //Initialization
 printf("Number : %d\n", number); //10
 number = number + 5;
 printf("Number : %d\n", number); //15
 return 0;
}
*/


/*
int main (void){
     //Pointer Assignment//
	 int *ptrNumber = NULL; //Initialization
	 int number = 10; //Initialization
	 ptrNumber = &number; //Assignment
	 //How will you print value 10 ?
	 printf("Value : %d\n", number);      //Value : 10
	 printf("Value : %d\n", *ptrNumber);  //Value : 10

return 0;
}
*/


/*
int main (void){
     int number = 10; //Initialization
     int *ptrNumber = &number; //Initialization
     //How will you print value 10 ?
     printf("Value : %d\n", number);        //Value : 10
     printf("Value : %d\n", *ptrNumber);    //Value : 10
return 0;
}
*/
/*
int main (void){
	//NULL is a macro
	 int *ptrNumber = NULL;
	 //warning: unused variable 'ptrNumber' [-Wunused-variable]
	 //ptrNumber is a NULL pointer
	 return 0;
}
*/


/*
int main ( void ){
     //Uninitialied non static local pointer variable
     int *ptrNumber; //Wild Pointer
     //warning: unused variable 'ptrNumber' [-Wunused-variable]
return 0;
}
*/

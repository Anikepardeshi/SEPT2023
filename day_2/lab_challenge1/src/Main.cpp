#include<cstdio>
int main(void){

int num1,num2,num3,temp;
int *ptrNum1, *ptrNum2, *ptrNum3;
printf("Input 1st number:");
scanf("%d",&num1);	ptrNum1=&num1;
printf("Input 2nd number:");
scanf("%d",&num2);	ptrNum2=&num2;
printf("Input 3rd number:");
scanf("%d",&num3);	ptrNum3=&num3;
printf("\nValues before swapping: \nelement1:	%d\nelement2:	%d\nelement3:	%d\n",*ptrNum1,*ptrNum2,*ptrNum3);
temp=*ptrNum2;
*ptrNum2=*ptrNum1;
*ptrNum1=*ptrNum3;
*ptrNum3=temp;
printf("\nValues after swapping: \nelement1:	%d\nelement2:	%d\nelement3:	%d\n",*ptrNum1,*ptrNum2,*ptrNum3);
}

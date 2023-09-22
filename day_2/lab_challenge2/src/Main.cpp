#include<cstdio>
int main (void){

	int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    scanf("%d",&num1);
    scanf("%d",&num2);

    if (*ptr1 >*ptr2)
    	printf("%d",*ptr1);

    else
    	printf("%d",*ptr2);

}

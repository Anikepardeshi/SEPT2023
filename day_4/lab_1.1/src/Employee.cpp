#include<cstdio>
#include"../include/Employee.h"
void Employee::acceptRecord( void ){	//Member function
	printf("Name	:	");
	scanf("%s", name );
	printf("Empid	:	");
	scanf("%d", &empid );
	printf("Salary	:	");
	scanf("%f", &salary );
}

void Employee::printRecord( void ){	//Member function
	printf("Name	:	%s\n", name);
	printf("Empid	:	%d\n", empid);
	printf("Salary	:	%f\n", salary);
}

#include<cstdio>

struct employee{

	char name[30];
	int empid;
	float salary;


	void accept_record ()
	{

		printf("\nNameeeee :");
		scanf("%s", name);

		printf("\nEmpid :");
		scanf("%d", &empid);

		printf("\nSalary :");
	    scanf("%f", &salary);

	}

	void print_record (void)
	{
		printf("\nName	:	 %s\n", name);
		printf("Empid	:	 %d\n", empid);
		printf("Salary	:	 %f\n", salary);
	}
};


int main (void)
{
struct employee emp;

emp.accept_record();

emp.print_record();

fflush(stdout);

return 0;

}

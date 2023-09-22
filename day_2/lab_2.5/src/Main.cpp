#include <stdio.h>

struct Employee {
    char name[30];
    int empId;
    float salary;
};

void accept_record(struct Employee *ptr) {
    printf("Name    : ");
    scanf("%s", ptr->name);
    printf("ID      : ");
    scanf("%d", &(ptr->empId));
    printf("Salary  : ");
    scanf("%f", &(ptr->salary));
}

void printRecord(struct Employee *ptr) {
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->empId);
    printf("Salary: %.2f\n", ptr->salary);
}

int main(void) {
	setbuf(stdout,NULL);
    struct Employee emp = { "", 0, 0.0 };
    printf("Enter Employee Information:\n");
    accept_record(&emp);
    printf("\nEmployee Information:\n");
    printRecord(&emp);
    return 0;
}

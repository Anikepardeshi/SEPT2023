#include<cstdio>
struct student
{
   char student_name[30];
   int roll_number;
   int marks;
};

int main ()
{
struct student s;
int total =0;
int i;
float avg;

printf("Enter student name		:	");
scanf("%s", &s.student_name);

printf("Enter student roll number	:	");
scanf("%d", &s.roll_number);

printf("Enter student marks		:	");
scanf("%d", &s.marks);

for (i=0; i<5; i++)
{
	scanf("%d", &s.marks[i]);
	total = total+s.marks[i];
	avg = (float)total/5;
}

printf("Student name %s\n:",s.student_name);
printf("Student roll number %d\n:", s.roll_number);
printf("Student total marks %d\n:", total);
printf("Student average marks %f\n:", avg);

return 0;
}

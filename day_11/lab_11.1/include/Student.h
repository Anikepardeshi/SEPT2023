

#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
using namespace std;

class Student{
private:
	string name;
	int rollNumber;
	float marks;
	char grade;
public:
	void setName(string name);

	void setrollNumber (int rollNumber );

	void setmarks(float marks);

	string getName();

	int getrollNumber();

	float getmarks();

    // AcceptInformation();

   void calculateGrade();

   void printinformation();
};

#endif /* STUDENT_H_ */

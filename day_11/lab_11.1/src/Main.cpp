
#include"../include/Student.h"

int main (void){
	Student s1;
	//s1.AcceptInformation();
	s1.setName("Aniket");
	s1.setrollNumber(77);
	s1.setmarks(90);
	s1.getName();
	s1.getrollNumber();
	s1.getmarks();
	s1.calculateGrade();
	s1.printinformation();

	return 0;
}

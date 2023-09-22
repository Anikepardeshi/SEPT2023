#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	int rollNumber;
	float marks;
	char grade;
public:
/*
    void AcceptInformation(){

		cout <<"ENTER NAME :"<<endl;
		cin >> name;
		cout <<"ENTER ROLL NUMBER :"<<endl;
		cin >> rollNumber;
		cout <<"ENTER MARKS:"<<endl;
		cin >> marks;
	};

*/
	void setName(string name)
	{
	    this->name = name;
	};
	void setrollNumber (int rollNumber ){
	    this->rollNumber = rollNumber;
	};
	void setmarks(float marks){
		this->marks = marks;
	};


    void printinformation(void){
    	cout<< "name : " <<name<<endl;
    	cout<<"rollnumber : "<<rollNumber<<endl;
    	cout<<"marks : "<<marks<<endl;
    	cout<<"grade : "<<grade<<endl;

    }



		void calculateGrade(){
			float check =	this->marks;
			if (check >= 90 && check <=100)
				this->grade='A';
			if (check>=80 && check<=89)
				this->grade='B';
			if (check>=70 && check<=79)
					this->grade='C';
			if (check>=60 && check<=69)
					this->grade='B';
			if (check < 60)
					this->grade='B';


			};

	};

int main (void){

	Student s1;
	//s1.AcceptInformation();
	s1.setName("Aniket");
	s1.setrollNumber(77);
	s1.setmarks(99);
	s1.calculateGrade();
	s1.printinformation();

	return 0;
}

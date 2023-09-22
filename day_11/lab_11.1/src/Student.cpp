#include<iostream>
#include "../include/Student.h"
using namespace std;

    void Student ::setName( string name){
	    this->name = name;
	}
	void Student::setrollNumber (int rollNumber ){
	    this->rollNumber = rollNumber;
	}
    void Student::setmarks(float marks){
		this->marks = marks;
	}
	string Student :: getName(){
		return name;
	}
	int Student :: getrollNumber(){
		return rollNumber;
    }
	float Student :: getmarks(){
		return marks;
		}
	/*
	 Student::AcceptInformation()
    {

		cout <<"ENTER NAME :"<<endl;
		cin >> name;
		cout <<"ENTER ROLL NUMBER :"<<endl;
		cin >> rollNumber;
		cout <<"ENTER MARKS:"<<endl;
		cin >> marks;
	}
*/
   void Student:: printinformation(void){
    	cout<< "name : " <<name<<endl;
    	cout<<"rollnumber : "<<rollNumber<<endl;
    	cout<<"marks : "<<marks<<endl;
    	cout<<"grade : "<<grade<<endl;
    }

  void Student:: calculateGrade(){
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

	}


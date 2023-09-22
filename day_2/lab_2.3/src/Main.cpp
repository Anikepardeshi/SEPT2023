#include<iostream>
using namespace std;

struct employee{

	char name [30];
	float empid;
	int salary;
	void accept(){

		cout << "Enter employee name  :";
	    cin >> name;
        cout << "Enter employee id  :";
		cin >> empid;
		cout << "Enter salary";
		cin >> salary;
	}
	void display (){

		cout << "\n name is :"<< name;
		cout << "\n empid :"<< empid;
		cout << "\n salary is :"<< salary;

	}

};

int main (void){

	struct employee emp;
	emp.accept();
	emp.display();


	return 0;

}

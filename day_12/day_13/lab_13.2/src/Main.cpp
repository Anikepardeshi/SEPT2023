
#include<iostream>
using namespace std;


class Rectangle {
private:
	float area;
	float length;
	float breadth;
public :
	Rectangle(void){
		this -> area = 0;
		this -> length = 0;
		this -> breadth = 0;
	}
	void acceptRecord(void){
		cout <<"ENTER THE LENGTH   : "<< endl;
		cin >> length;
		cout << "ENTER THE BREADTH : "<< endl;
		cin >> breadth;
		}
	void calculationn(){
		this -> area = this -> length * this -> breadth;
	}
	void printRecord(void){
		cout << "AREA : "<< this -> area  << endl;
	}
};

class Circle {
private :
	float area;
	float radius;
public :
	Circle (void){
		this -> area = 0;
		this -> radius = 0;
	}
	void acceptrecord (void ){
		cout << "ENTER THE RADIUS : "<< endl;
				cin >> this -> radius;
	}
	void calculations (void ){
	this -> area = 3.14 * this -> radius * this -> radius;
	}
	void printRecord(void ){
		cout << "AREA : "<< this -> area << endl;
	}
};

int main1 (void){
	Rectangle rect;
	rect.acceptRecord();
	rect.calculationn();
	rect.printRecord();
	return 0;
}

int main (void){
	Circle c;
	c.acceptrecord();
	c.calculations();
	c.printRecord();
	return 0;

}




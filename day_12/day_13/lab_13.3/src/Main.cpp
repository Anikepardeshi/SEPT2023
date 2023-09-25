#include<iostream>
using namespace std;

class Shape {
protected:
	float area;
public:
	Shape(void) {
		this->area = 0;
	}
	void printRecord(void) {
		cout << "AREA : " << this->area << endl;
	}
};
class Rectangle: public Shape {
private:
	float length;
	float breadth;
public:
	Rectangle(void) {
		this->length = 0;
		this->breadth = 0;
	}
	void acceptRecord(void) {
		cout << "ENTER THE LENGTH   : " << endl;
		cin >> length;
		cout << "ENTER THE BREADTH : " << endl;
		cin >> breadth;
	}
	void calculationn() {
		this->area = this->length * this->breadth;
	}
};

class Circle: public Shape {
private:
	float radius;
public:
	Circle(void) {
		this->radius = 0;
	}
	void acceptrecord(void) {
		cout << "ENTER THE RADIUS : " << endl;
		cin >> this->radius;
	}
	void calculations(void) {
		this->area = 3.14 * this->radius * this->radius;
	}
};

int main(void) {
	Rectangle rect;
	rect.acceptRecord();
	rect.calculationn();
	rect.printRecord();
	return 0;
}

int main1(void) {
	Circle c;
	c.acceptrecord();
	c.calculations();
	c.printRecord();
	return 0;

}


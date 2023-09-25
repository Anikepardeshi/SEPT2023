#include<iostream>
using namespace std;

class Shape {
protected:
	float area;
public:
	Shape(void) {
		this->area = 0;
	}
	virtual void acceptRecord(void) {

	}
	virtual void calculateArea(void) {

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
	void calculateArea() {
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
	void acceptRecord(void) {
		cout << "ENTER THE RADIUS : " << endl;
		cin >> this->radius;
	}
	void calculateArea(void) {
		this->area = 3.14 * this->radius * this->radius;
	}
};

int menu_list(void) {
	int choice;
	cout << "0. EXIT " << endl;
	cout << "1. RECTANGLE " << endl;
	cout << "2. CIRCLE " << endl;
	cout << "3. ENTER CHOICE : " << endl;
	cin >> choice;
	return choice;
}
int main(void) {
	int choice;
	while ((choice = ::menu_list()) != 0) {
		Shape *ptr = nullptr;
		switch (choice) {
		case 1:
			ptr = new Rectangle();
			break;
		case 2:
			ptr = new Circle();
			break;
		}
		if (ptr != nullptr) {
			ptr->acceptRecord();
			ptr->calculateArea();
			ptr->printRecord();
			delete ptr;
		}
	}
	return 0;
}

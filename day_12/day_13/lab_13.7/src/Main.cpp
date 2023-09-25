#include <iostream>
using namespace std;


class Shape {
protected :
    string name;
    int sides;
    float area;
public :
    Shape(void){
   this -> area = 0;
    }
    virtual void acceptRecord (void)= 0;

    virtual void calculateArea (void)=0;

    void printDetails(void){
    	cout << "AREA IS            :"<< this -> area << endl;
    }
    virtual ~Shape(void){

    }
};

class Triangle : public Shape {
private:
    int base;
    int height;

public:
    Triangle(void){
        this->base = 0;
        this->height = 0;
    }
    void acceptRecord( void ){
    cout << "ENTER BASE 	:	";
    		cin >> this->base;
    cout << "ENTER HEIGHT	:	";
    		cin >> this->height;
    	}

    void calculateArea(void){
    	this -> area = 0.5 * this -> base * this -> height;
    }
};
class Square : public Shape {
private:
    int height;

public:
    Square(){
        this->height = height;
    }

    void acceptRecord(){
    cout << "ENTER HEIGHT	:	";
    cin >> this->height;
    }
    void calculateArea(void){
    this -> area = this -> height * this -> height;
    }
};
int menu_list(void){
	int choice;
	cout << "0. EXIT" << endl;
	cout << "1. TRIANGLE" << endl;
	cout << "2. SQUARE" << endl;
	cout << "ENTER CHOICE : " << endl;
	cin >> choice;
	return choice;
}

int main (void){
	int choice;
	while ( ( choice = ::menu_list() ) != 0 ){
		Shape *ptr = nullptr;
		switch (choice){
		case 1 :
		ptr = new Triangle();
		break;
		case 2 :
		ptr = new  Square();
		break;
	}
		if (ptr != nullptr){
		ptr -> acceptRecord();
		ptr -> calculateArea();
		ptr -> printDetails ();
		delete ptr;
		}
		}
}
/*
int main1()
{
    // Creating objects
    triangle t("triangle", 3, 2, 3);
    square s("square", 4, 2);

    t.details();
    cout << endl << endl;

    s.details();
    return 0;
}
*/

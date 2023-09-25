#include <iostream>
#include <string>
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
    	cout << "NAME OF OBJECT     :"<< this -> name << endl;
    	cout << "NUMBER OF SIDES    :"<< this -> sides << endl;
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
        this -> name = "Triangle;";
        this -> sides = 3;
    }
};
class Square : public Shape {
private:
    int side;

public:
    Square(){
        this->side = side;
    }

    void acceptRecord(){
    cout << "ENTER HEIGHT	:	";
    cin >> this->side;
    }
    void calculateArea(void){
    this -> area = this -> side * this -> side;
    this -> name = "Square";
    this -> sides = 4;
    }
};

int menu_list( void ){
	int choice;
	cout << "0.Exit" << endl;
	cout << "1.TRIANGLE" << endl;
	cout << "2.SQUARE" << endl;
	cout << "Enter choice	:	";
	cin >> choice;
	return choice;
}

int main( void ){
	int choice;
	while( ( choice =menu_list( ) ) != 0 ){
		Shape *ptr = nullptr;
		switch( choice ){
		case 1:
			ptr = new Triangle( );
			break;
		case 2:
			ptr = new Square( );
			break;
		}

		if (ptr != nullptr){
		ptr -> acceptRecord();
	    ptr -> calculateArea();
	    ptr -> printDetails ();
	    delete ptr;
			}
	}
	return 0;
}



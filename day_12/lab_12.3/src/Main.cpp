
#include <iostream>
#include<string>
using namespace std;

class Engine {
private:
	string manufacturer;
	int Strokes;
	int Cno;
public:
	Engine(void) {
		this->manufacturer = "";
		this->Strokes = 0;
		this->Cno = 0;
	}

	Engine(string manufacturer, int Strokes, int Cno) {
		this->manufacturer = manufacturer;
		this->Strokes = Strokes;
		this->Cno = Cno;
	}

	void printrecord(void) {
		cout << "MANIFACTURER      : " << this->manufacturer << endl;
		cout << "NUMBER OF STROKES : " << this->Strokes << endl;
		cout << "CHASSI NUMBER     : " << this->Cno << endl;
	}
	~Engine(void) {
		cout << "~Engine(void)" << endl;
	}
};
class Vehicle : public Engine {
private :
	string Model;
	string Color;
	int Seat;
public:
	Vehicle(void) {
		cout << "Vehicle( void )" << endl;
		this->Model = "";
		this->Color = "";
		this->Seat = 0;
	}
	Vehicle(string Model,string Color, int Seat) {
		cout << "Vehicle( void )" << endl;
		this->Model = Model;
		this->Color = Color;
		this->Seat = Seat;
	}
	Vehicle(string Model, string Color, int Seat,string manufacturer, int Strokes, int Cno ):Engine (manufacturer,Strokes,Cno){
		this->Model = Model;
		this->Color = Color;
		this->Seat = Seat;
	}
	void printrecord(void) {
		::Engine printrecord();
		cout << "MODEL	            : " << this->Model << endl;
		cout << "Color	            : " << this->Color << endl;
		cout << "number of seats	: " << this->Seat << endl;

	}
	~Vehicle(void) {
		cout<< "~Vehicle( void )" << endl;
	}
};

int main1( void ){
	Vehicle v( "THAR","BLACK",4,"mahindra",4,44);
	v.printrecord ();
	cout<<"------------------"<<endl;
	return 0;
}
int main2( void ){
	Engine *ptr = new Engine( "mahindra", 40 ,44);
	ptr->printrecord();
	cout<<"------------------"<<endl;
	delete ptr;
	return 0;
}
int main( void ){
	Engine p( "mahindra", 40, 44 );
	p.printrecord();
	cout<<"------------------"<<endl;
	return 0;
}

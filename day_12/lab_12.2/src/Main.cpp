#pragma pack(1)
#include <iostream>
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
		cout << "MANIFACTURER : " << this->manufacturer << endl;
		cout << "NUMBER OF STROKES" << this->Strokes << endl;
		cout << "CHASSI NUMBER : " << this->Cno << endl;
	}
};

int main1(void) {

	Engine e("mahindra", 4, 44);
	e.printrecord();
	return 0;
}

int main2(void) {
	Engine e;
	cout << sizeof(e) << endl;
	return 0;
}
class Vehicle{
private:
	string manufacturer;
	int Strokes;
	int Cno;
	string Model;
	string Color;
	int Seat;
public:
	Vehicle(void){
		this->manufacturer = "";
		this->Strokes = 0;
		this->Cno = 0;
		this->Model = "";
		this->Color = "";
		this->Seat = 0;
	}
	Vehicle(string manufacturer, int Strokes, int Cno,string Model, string Color, int Seat){
		this->manufacturer = manufacturer;
		this->Strokes = Strokes;
		this->Cno = Cno;
		this->Model = Model;
		this->Color = Color;
		this->Seat = Seat;
	}
	void printrecord(void) {
		cout << "MANIFACTURER	    :" << this->manufacturer << endl;
		cout << "NUMBER OF STROKES  :"<< this->Strokes << endl;
		cout << "CHASSI NUMBER	    :" << this->Cno << endl;
		cout << "MODEL	            :" << this->Model << endl;
		cout << "Color	            :" << this->Color << endl;
		cout << "number of seats	:" << this->Seat << endl;

	}
};

int main(void){
	Vehicle v("mahindra", 4, 44,"Thar","Black",4);
	v.printrecord();
	return 0;
}

int main4(void) {
	Vehicle v;
	;
	cout << sizeof(v) << endl;	//36 bytes
	return 0;
}


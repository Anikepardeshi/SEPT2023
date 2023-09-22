#include<iostream>
using namespace std;

class complex{
private:
	int real;
	int imag;
public:
	void acceptRecord(void){
	cout << "ENTER THE REAL NUMBER :";
	cin >> this->real;
	cout << "ENTER THE IMAGINARY :";
	cin >> this->imag;
	}
	void printRecord (void){
	cout << "NUMBER IS : "<< real<<endl;
	cout << "NUMBER IS : "<< imag<<endl;
10

	}
	complex sum(complex *ptr){
	complex result;
	result.real	= this->real + ptr->real;
	result.imag = this->imag + ptr->imag;
	return result;
	}

};

int main (){
	complex c1;
	complex c2;
	complex c3;
	c1.acceptRecord();
    //c1.printRecord ();
    c2.acceptRecord();

    c3 = c1.sum(&c2);
    c3.printRecord();
    return 0;
}

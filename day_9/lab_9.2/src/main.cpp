#include<iostream>
using namespace std;
class Complex{
private:
 int real;
 int imag;
public:
 Complex( void ){
 this->real = 0;
 this->imag = 0;
 }
 //const Complex &other = c1;
 //Complex *const this = &c3
 Complex( const Complex &other ){ //Copy Constructor
 this->real = other.real; //Shallow Copy
 this->imag = other.imag; //Shallow Copy
 }
 Complex( int real, int imag ){
 this->real = real;
 this->imag = imag;
 }
 void printRecord( void ){
 cout << "Real Number : " << this->real << endl;
 cout << "Imag Number : " << this->imag << endl;
 }
};
int main( void ){
 Complex c1( 10, 20 ); //On C1, Parameterized ctor will call
 Complex c2; //On c2, parameterless constructor will call
 Complex c3 = c1; //On c3, copy constructor will call
 c3.printRecord();
 return 0;
}

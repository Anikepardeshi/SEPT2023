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
 Complex( int real, int imag ){
 this->real = real;
 this->imag = imag;
 }
 void printRecord( void ){
 cout << "Real Number : " << this->real <<endl;
 cout << "Imag Number : " << this->imag <<endl;
 }
 };
 int main( void ){
 Complex c1( 10, 20 );
 Complex c2( 30, 40 );
 Complex c3;
 c3 = c1 + c2;                             //error: invalid operands to binary expression
('Complex' and 'Complex');
 c2.printRecord( );
 return 0;
 }

#include <iostream>
using namespace std;

namespace nutil{
class Anii{
private :
	int real;
	int imag;
public :
	Anii( void );

	Anii( int real, int imag );

	int getReal( void )const;

	void setReal( const int real );

	int getImag( void )const;

	void setImag( const int imag );

	friend istream& operator>>( istream &cin, Anii &other );

	friend ostream& operator<<( ostream &cout, const Anii &other );

	};
}

using namespace nutil;
Anii::Anii( void ) : real( 0 ), imag( 0 ){
	}
Anii::Anii( int real, int imag ) : real( real ), imag( imag ){
	}
    int Anii ::getReal( void )const{
		return this->real;
	}
	void Anii::setReal( const int real ){
		this->real = real;
	}
	int Anii::getImag( void )const{
			return this->imag;
		}
	void Anii::setImag( const int imag ){
		this->imag = imag;
	}
	istream& nutil ::operator >>(istream &cin, Anii &other ){

		cout << "Enter real number : ";
		cin >> other.real;
		cout << "Enter imag number : ";
		cin >> other.imag;
		return cin;
	}
	ostream& nutil::operator<<(ostream &cout , const Anii &other){
		cout << "Real number  :  "<< other.real<<endl;
		cout << "Imag number  :  "<< other.imag<<endl;
		return cout;
		}

int main(void){
	Anii c1;
	cin >> c1;
	c1.setReal (c1.getReal() +5 );
	c1.setImag(c1.getImag()  +5);

    cout << c1;
    return 0;
}

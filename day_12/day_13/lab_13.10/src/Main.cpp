#include <iostream>
using namespace std;
namespace nutil{
class Fruits {
private :
	int real;
	int imag;
public :
	Fruits (void);
	Fruits (int real, int imag);
	int getReal (void)const;
	void setReal(const int real);
	int getImag (void)const;
	void setImag(const int imag);

	friend istream& operator >> (istream &cin, Fruits &other);
	friend ostream& operator << (ostream &cout, Fruits &other);

};
}

using namespace nutil;
Fruits:: Fruits (void ): real (0), imag (0){
}
Fruits::Fruits (int real. int imag): real (real), imag (imag){
}
int Fruits ::

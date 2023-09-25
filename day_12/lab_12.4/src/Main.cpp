#include<iostream>
#include<string>
using namespace std;
class Product{
private:
	string title;	//24
	float price;	//4
public:
	Product( void ){
		this->title = "";
		this->price = 0;
	}
	virtual void acceptRecord( void ){
		cout<<"Title	:	";
		cin >>this->title;
		cout<<"Price	:	";
		cin>>this->price;
	}
	virtual void printRecord( void ){
		cout<<"Title	:	"<< this->title <<endl;
		cout<<"Price	:	"<<this->price<<endl;
	}
};
class Book : public Product{
private:
	int pageCount;	//4
public:
	Book( void ){
		this->pageCount = 0;
	}
	virtual void acceptRecord( void ){
		Product::acceptRecord( );
		cout<<"Page Count	:	";
		cin>>this->pageCount;
	}
	virtual void printRecord( void ){
		Product::printRecord( );
		cout<<"Page Count	:	"<<this->pageCount<<endl;
	}
};
class Tape : public Product{
private :
	int playtime;
public :
	Tape (void){
		this -> playtime = 0;
	}
	virtual void acceptRecord(void){
		Product ::acceptRecord( );
		cout << "Play Time 	:	";
		cin >> this -> playtime;
	}
	virtual void printrecord (void){
		Product :: printRecord ();
		cout << "Play Time	:	"<<this -> playtime<<endl;
	}
};
int menu_list( void ){
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Book"<<endl;
	cout<<"2.Tape"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
	int main( void ){
		int choice;
		while( ( choice = ::menu_list( ) ) != 0 ){
			Product *ptr = nullptr;
			switch( choice ){
			case 1:
				ptr = new Book( );
				break;
			case 2:
				ptr = new Tape( );
				break;
			}
			if( ptr != nullptr ){
				ptr->acceptRecord( );
				ptr->printRecord( );
				delete ptr;
				ptr = nullptr;
			}
		}
		return 0;
	}

























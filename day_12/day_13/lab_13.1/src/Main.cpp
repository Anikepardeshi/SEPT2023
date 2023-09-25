
#include<iostream>
using namespace std;


int main1 (void){
	float area;
	float radius;
	cout << "ENTER THE RADIUS : "<<endl;
	cin >> radius;
	area = 3.14* radius*radius;
	cout<<"AREA OF CIRCLE : "<<area<<endl;
	return 0;
}

int main(void){
	float area;
	float length;
	float breadth;
	cout << "ENTER THE LENGTH : "<<endl;
		cin >> length;;
	cout << "ENTER THE BREADTH : "<<endl;
		cin >> breadth;
	area = length * breadth;
	cout << "AREA OF RECTANGLE : "<<area<<endl;
    return 0;
}

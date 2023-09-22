#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class TollBooth{
private:
	int totalVehicles=0;
	double totalRevenue=0;

public:

     void reset(){
    	 this->totalVehicles = 0;
    	 this->totalRevenue = 0;
     }

     void vehiclePayingToll(int vehicleType, double tollAmount){

    	 cout<<"vehicle"<<endl;
    	 this->totalVehicles += 1;

    	 if(vehicleType == 1){
    		 this->totalRevenue += (tollAmount + 20.0);
    	 }
    	 else if(vehicleType == 2){
    		 this->totalRevenue += (tollAmount + 50.0);
    	 }
    	 else if(vehicleType == 3){
    		 this->totalRevenue += (tollAmount + 100.0);
    	 }

     }

     int getTotalVehicles(){
    	 //int tot = totalVehicles;
		// return tot;
    	 	cout<<"sdfjkghsdgsj"<<endl;
		 return this->totalVehicles;
	  }

     double getTotalRevenue(){
    	 //double rev = totalRevenue;
		// return rev;
		 return this->totalRevenue;
	  }

};

int main(){
	TollBooth toll;

	//cout<<toll.totalRevenue<<endl;
	//cout<<toll.totalVehicles<<endl;

	int c;

	do{
		cout<<"\n1. Add a standard car and collect toll"<<endl;
		cout<<"2. Add a truck and collect toll"<<endl;
		cout<<"3. Add a bus and collect toll"<<endl;
		cout<<"4. Display total cars passed"<<endl;
		cout<<"5. Display total revenue collected"<<endl;
		cout<<"6. Reset booth statistics"<<endl;
		cout<<"7. Exit"<<endl;

		cin>>c;

		switch(c){
		case 1:
			cout<<"Enter toll amount : "<<endl;
			double ta1;
			cin>>ta1;
			toll.vehiclePayingToll(1,ta1);
		    break;

		case 2:
			cout<<"Enter toll amount : "<<endl;
			double ta2;
			cin>>ta2;
			toll.vehiclePayingToll(2,ta2);
			break;

		case 3:
			cout<<"Enter toll amount : "<<endl;
			double ta3;
			cin>>ta3;
			toll.vehiclePayingToll(3,ta3);
			break;

		case 4:
			cout<<"Total Vehicles passed : "<<toll.getTotalVehicles()<<endl;
			break;


		case 5:
			cout<<"Total Revenue collected : "<<toll.getTotalRevenue()<<endl;
			break;


		case 6:
			toll.reset();
			break;

		case 7:
			cout<<"Exit!!";
			break;

		}
	}while(c!=7);

		return 0;
}

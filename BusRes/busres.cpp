//  main.cpp
//  BusRes
//
//  Created by Will Micol on 7/31/19.
//  Copyright © 2019 WM. All rights reserved.
//

#include <iostream>
#include <string> 
#include <array>

using namespace std;



class Bus
{
    
  public:

  int busNumber;
  string driverName;
  string arrivalTime;
  string departureTime;
  string destination;
  string origin;

    Bus(){

    }
    Bus(int bN, string dN, string aT, string dT, string d, string o){
        busNumber = bN;
        driverName = dN;
        arrivalTime = aT;
        departureTime = dT;
        destination = d;
        origin = o;
    }
    void changeNameTo(string newName){
       driverName = newName;
    }

};

    void addBus(Bus param[]){
    	  int busN;
		  string driverN;
		  string arrivalT;
		  string departureT;
		  string desti;
		  string origi;
  
  
	    cout << "Bus Number:";
	    cin >> busN;
	    cout << "\n";
	    cin.ignore();
	    cout << "Driver Name:";
	    getline(cin, driverN);
	    cout << "\n";
	    cout << "Arrival Time:";
	    getline(cin, arrivalT);
	    cout << "\n";
	    cout << "Departure Time:";
	    getline(cin, departureT);
	    cout << "\n";
	    cout << "Destination:";
	    getline(cin, desti);
	    cout << "\n";
	    cout << "Origin:";
	    getline(cin, origi);
	    cout << "\n";

        Bus var[sizeof(param)+1];
        for(int i = 0; i<sizeof(param); i++){
            var[i].busNumber = param[i].busNumber;
            var[i].driverName = param[i].driverName;
            var[i].arrivalTime = param[i].arrivalTime;
            var[i].departureTime = param[i].departureTime;
            var[i].destination = param[i].destination;
            var[i].origin = param[i].origin;
        }
        var[sizeof(param)+1].busNumber = busN;
        var[sizeof(param)+1].driverName = driverN;
        var[sizeof(param)+1].arrivalTime = arrivalT;
        var[sizeof(param)+1].departureTime = departureT;
        var[sizeof(param)+1].destination = desti;
        var[sizeof(param)+1].origin = origi;
        param = new Bus[sizeof(var)];
        for(int i = 0; i<sizeof(var); i++){
            param[i].busNumber = var[i].busNumber;
            param[i].driverName = var[i].driverName;
            param[i].arrivalTime = var[i].arrivalTime;
            param[i].departureTime = var[i].departureTime;
            param[i].destination = var[i].destination;
            param[i].origin = var[i].origin;

    }
    
}

Bus theBuses[1] = {Bus(1,"t","t","t","t","t")};

void showBus(int theBus, Bus param[]){
    cout << param[theBus].busNumber << endl;
    cout << param[theBus].driverName << endl;
    cout << param[theBus].arrivalTime << endl;
    cout << param[theBus].departureTime << endl;
    cout << param[theBus].destination << endl;
    cout << param[theBus].origin << endl;
}

void install(){

  	while(2>1){
	addBus(theBuses);
	int var = 0;
	cout << "Do you wish to add another bus? If so type 1" << endl;
	cin >> var;
		if(var == 1){
			break;
		} else {
			continue;
		}
	}
	

    // cout << busNumber << endl;
    // cout << driverName << endl;
    // cout << arrivalTime << endl;
    // cout << departureTime << endl;
    // cout << destination << endl;
    // cout << origin << endl;

    // addBus(Bus(busNumber, driverName, arrivalTime, departureTime, destination, origin), theBuses);
    // Bus newBusList[2] = {Bus(busNumber, driverName, arrivalTime, departureTime, destination, origin), Bus(busNumber, driverName, arrivalTime, departureTime, destination, origin)};
    // showBus(0, newBusList);

    // for(int i = 0; i<sizeof(newBusList); i++){
    //     showBus(i, newBusList);
    // }

    
}

void reservation(){
    cout << "Reserving things...\n";
}

void show(){
    cout << "Showing things...\n";
}

void buses(){
    cout << "Bussing things...\n";
}

void exit(){
    cout << "Exiting...\n";
}
int main() {
    // insert code here...
    int choice;
    
    cout << "\t\t\t1. Install\n\t\t\t2. Reservation\n\t\t\t3. Show\n\t\t\t4. Buses Available\n\t\t\t5. Exit\n\t\t\tEnter Choice: ";
    cin >> choice;
    
    
    switch(choice){
        case 1 :
            install();
            break;
        
        case 2 :
            reservation();
            break;
            
        case 3 :
            show();
            break;
        case 4 :
            buses();
            break;
        case 5 :
            exit();
            break;
    }
    

    
    
    return 0;
}



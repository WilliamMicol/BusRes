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

//     void addBus(Bus b, Bus param[]){
//         Bus var[sizeof(param)+1];
//         for(int i = 0; i<sizeof(param); i++){
//             var[i] = param[i];
//         }
//         var[sizeof(param)+1] = b;
//         param = new Bus[sizeof(var)];
//         for(int i = 0; i<sizeof(var); i++){
//             param[i] = var[i];
//     }
    
// }

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
  
  int busNumber;
  string driverName;
  string arrivalTime;
  string departureTime;
  string destination;
  string origin;
  
  
    cout << "Bus Number:";
    cin >> busNumber;
    cout << "\n";
    cin.ignore();
    cout << "Driver Name:";
    getline(cin, driverName);
    cout << "\n";
    cout << "Arrival Time:";
    getline(cin, arrivalTime);
    cout << "\n";
    cout << "Departure Time:";
    getline(cin, departureTime);
    cout << "\n";
    cout << "Destination:";
    getline(cin, destination);
    cout << "\n";
    cout << "Origin:";
    getline(cin, origin);
    cout << "\n";

    // cout << busNumber << endl;
    // cout << driverName << endl;
    // cout << arrivalTime << endl;
    // cout << departureTime << endl;
    // cout << destination << endl;
    // cout << origin << endl;

    // addBus(Bus(busNumber, driverName, arrivalTime, departureTime, destination, origin), theBuses);
    Bus newBusList[1] = {Bus(busNumber, driverName, arrivalTime, departureTime, destination, origin)};
    showBus(0, newBusList);

    // for(int i = 0; i<sizeof(theBuses); i++){
    //     cout << theBuses[i].busNumber << endl;
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



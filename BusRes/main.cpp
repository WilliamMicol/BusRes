//  main.cpp
//  BusRes
//
//  Created by Will Micol on 7/31/19.
//  Copyright © 2019 WM. All rights reserved.
//

#include <iostream>
#include <string> 

void install(){
  int busNumber;
  std::string driverName;
  std::string arrivalTime;
  std::string departureTime;
  std::string destination;
  std::string origin;
  
  
    std::cout << "Bus Number:";
    std::cin >> busNumber;
    std::cout << "\n";
    std::cin.ignore();
    std::cout << "Driver Name:";
    getline(std::cin, driverName);
    std::cout << "\n";
    std::cout << "Arrival Time:";
    getline(std::cin, arrivalTime);
    std::cout << "\n";
    std::cout << "Departure Time:";
    getline(std::cin, departureTime);
    std::cout << "\n";
    std::cout << "Destination:";
    getline(std::cin, destination);
    std::cout << "\n";
    std::cout << "Origin:";
    getline(std::cin, origin);
    std::cout << "\n";

    std::cout << busNumber << std::endl;
    std::cout << driverName << std::endl;
    std::cout << arrivalTime << std::endl;
    std::cout << departureTime << std::endl;
    std::cout << destination << std::endl;
    std::cout << origin << std::endl;
    
}

void reservation(){
    std::cout << "Reserving things...\n";
}

void show(){
    std::cout << "Showing things...\n";
}

void buses(){
    std::cout << "Bussing things...\n";
}

void exit(){
    std::cout << "Exiting...\n";
}
int main() {
    // insert code here...
    int choice;
    
    std::cout << "\t\t\t1. Install\n\t\t\t2. Reservation\n\t\t\t3. Show\n\t\t\t4. Buses Available\n\t\t\t5. Exit\n\t\t\tEnter Choice: ";
    std::cin >> choice;
    
    
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



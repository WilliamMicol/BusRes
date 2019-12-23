//
//  main.cpp
//  BusRes
//
//  Created by Will Micol on 7/31/19.
//  Copyright © 2019 WM. All rights reserved.
//

#include <iostream>

void install(){
    std::cout << "Installing...\n";
}

void reservation(){
    std::cout << "Reserving...\n";
}

void show(){
    std::cout << "Showing...\n";
}

void buses(){
    std::cout << "Bussing...\n";
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



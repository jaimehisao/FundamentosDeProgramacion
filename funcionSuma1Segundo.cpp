//
//  main.cpp
//  funcionSuma1Segundo
//
//  Created by Jaime Hisao on 10/12/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void checkCondition(int &hours, int &minutes, int &sec){
    
    //Checks if Sum of Seconds will equal 60 seconds, if not, sum 1 to seconds
    if(sec+1 != 60){
        sec++;
    }
    
    //Checks if sum of seconds equals 60 seconds, if true, adds a minute and sets seconds to 0
    if(sec+1 == 60){
        minutes++;
        sec = 0;
    }
    
    //Checks if sum of minutes equals 60, if yes, adds one to hour and sets minutes to 0
    if (minutes+1 == 60) {
        hours++;
        minutes = 0;
    }
}

int main(int argc, const char * argv[]) {
   
    int hours, minutes, seconds; //Value Declaration
    cin>>hours>>minutes>>seconds; //Value Input
    checkCondition(hours, minutes,seconds); //Checks wether tu sum and change values
    cout<<hours<<" "<<minutes<<" "<<seconds; //Prints
    return 0;
}

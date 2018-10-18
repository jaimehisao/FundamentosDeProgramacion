//
//  main.cpp
//  funcComparaFechas -- Program that recieves 3 dates and tells you which one comes first.
//
//  Created by Jaime Hisao on 10/12/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
#include <time.h>
using namespace std;

void difCalc(int &day1, int &month1,  int &year1, int day2, int month2, int year2){
    //Y* 365 + M*30 + D -- Get Number of Days - Then get the difference
    long long int days1 = year1 * 365 + month1 * 30 + day1;
    long long int days2 = year2 * 365 + month2 * 30 + day2;
    
    //Checks condition, if day 2 is greater, change values, otherwise, leave untouched
    if(days2<=days1){
        day1=day2;
        month1=month2;
        year1=year2;
    }
}

int main(int argc, const char * argv[]) {
    
    int day1, day2, day3, month1,month2,month3,year1,year2,year3; //Declaration
    cin>>day1>>month1>>year1>>day2>>month2>>year2>>day3>>month3>>year3; //Input
    difCalc(day1, month1, year1,day2, month2, year2); //Days 1 and Days2
     difCalc(day1, month1, year1,day3, month3, year3); //Days 2 and 3
    cout<<day1<<" "<<month1<<" "<<year1; //Print
    return 0;
}

//
//  main.cpp
//  serieFibonacci - Shows user numbers down from it in the fibonacci sequence.
//
//  Created by Jaime Hisao on 9/18/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int numRecieved,fibo = 0, numA = 1, numB = 0; //Declaration
    cin>>numRecieved; //RECIEVES NUMBER
    
    while((numA + numB)<=numRecieved){
        fibo = numA + numB; //Fibo Number
        cout<<fibo<<" "; //Prints
        numA = numB; //Equals numbers to lower pair
        numB = fibo;
    }
    
    return 0;
}

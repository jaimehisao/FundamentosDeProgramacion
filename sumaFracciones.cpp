//
//  main.cpp
//  sumaFracciones
//
//  Created by Jaime Hisao on 10/11/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void addFrac(int &num, int &denom, int num1, int denom1){
    num = num * denom1 + num1 * denom;
    denom = denom * denom1;
}

int main(int argc, const char * argv[]) {
   
    int num1, num2, num3, denom1, denom2, denom3;
    cin>>num1>>denom1>>num2>>denom2>>num3>>denom3;
    
    addFrac(num1, denom1, num2, denom2);
    addFrac(num1, denom1, num3, denom3);
    
    cout<<num1<<denom1;
    
    return 0;
}

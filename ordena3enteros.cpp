//
//  main.cpp
//  ordena3enteros
//
//  Created by Jaime Hisao on 10/11/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;


void func(int &a, int &b, int &c){
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

}

int main(int argc, const char * argv[]) {
    
    int a,b,c;
    cin>>a>>b>>c;
    func(a,b,c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}

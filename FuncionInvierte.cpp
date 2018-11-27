//
//  main.cpp
//  FuncionInvierte
//
//  Created by Jaime Hisao on 10/19/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void invierte(int s, int arr[], int arrInv[], int &sInv){
    int counter = s;
    counter--;
    for(int i = 0; i < s; i++){
        arrInv[i] = arr[counter];
        counter--;
    }
}

int main(int argc, const char * argv[]) {
   
    int size, size2;
    cin>>size;
    int arr[size];
    int arrInv[size];
    
    for (int z = 0; z<size; z++) {
        int value;
        cin>>value;
        arr[z] = value;
    }
    
    invierte(size, arr, arrInv, size2);
    
    for (int i = 0; i<size; i++) {
        cout<<arrInv[i]<<" ";
    }
    
    
    return 0;
}

//
//  main.cpp
//  FuncionSustituye
//
//  Created by Jaime Hisao on 10/18/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void sustituye(int arr[], int N, int length){
    for(int i = 0; i < length; i++){
        if(arr[i]%N==0){
            arr[i]=-1;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int length, value; //Declare vars
    cin>>length; //Recieve Value
    int arr[length]; //Declare Array and use input as value
    
    for(int i = 0; i < length ; i++){
        cin>>arr[i]; //Recieve Array Values & Fill Up
    }
    
    cin>>value; //Recieve value to check if multiple of
    sustituye(arr, value, length);
    
    for(int i = 0; i < length ; i++){ //Print Modified Array
        cout<<arr[i]<<endl;
    }
    
    return 0;
}

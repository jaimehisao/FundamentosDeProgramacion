//
//  main.cpp
//  copiaValoresNegativos
//
//  Created by Jaime Hisao on 10/19/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void checkNeg(int array[], int &size, int negArray[], int &counter){
    counter = 0;
    for(int i = 0; i < size; i++){
        if(array[i] < 0){
            negArray[counter] = array[i];
            counter++;
        }
    }
    
}





int main(int argc, const char * argv[]) {
   
    int size, c2 = 0;
    cin>>size;
    int arr[size];
    int arr2[size];
    
    for(int z = 0; z < size; z++){
        int value;
        cin>>value;
        arr[z] = value;
    }
    
    checkNeg(arr, size, arr2, c2);
    
    for (int i = 0; i<c2; i++) {
        cout<<arr2[i]<<endl;
    }
    
    
    
    
    
    
    return 0;
}

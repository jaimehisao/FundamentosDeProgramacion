/*
  main.cpp
  VocalesEnArreglo -- This program recieves a char array of size n and checks how many of the values are vocals.
  Created by Jaime Hisao on 10/21/18.
  Copyright © 2018 Jaime Hisao. All rights reserved.
*/

#include <iostream>
using namespace std;

int numberOfVocals(char arr[], int size ){
    char vocArr[] = {'a','e','i','o','u'}; //Constant Array of Vocal Values
    int vocals = 0; //Initial Counter
    
    for(int i = 0; i < size; i++){ //Dual for Loop to compare values
        for (int j = 0; j <= 5; j++) {
        if(arr[i] == vocArr[j]){
            vocals++; //Adds one to the counter if the letter matches a vocal
        }
    }
    }
     return vocals; //Returns Value of type Integer
}

int main(int argc, const char * argv[]) {
    int size; //Declares Variable of Type Integer, Size of Array
    cin>>size; //Recieves value of array size
    char arr[size]; //Declares Array of Type Char
    for(int i = 0; i<size; i++){ //Loop that recieves the value of the Array
        cin>>arr[i];
    }
    cout<<numberOfVocals(arr, size); //Calls Function and prints the result
    return 0;
}

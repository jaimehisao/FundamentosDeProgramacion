//
//  main.cpp
//  copiaRango -- Programa que recibe un arreglo con tamaño n y recibe un rango de valores y regresa los valores que se encuentran dentro del rango dado.
//
//  Created by Jaime Hisao on 10/21/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void valueCheckerForRange(int arrA[], int arrB[], int sizeA, int &sizeB, int inf, int sup ){
    int counter = 0;
    for(int i = 0; i < sizeA; i++){
        if(arrA[i] >= inf && arrA[i] <= sup){
            arrB[counter] = arrA[i];
            counter++;
        }
    }
    
    sizeB = counter;
}

int main(int argc, const char * argv[]) {
    
    int sizeA, sizeB = 0, limInf,limSup;
    cin>>sizeA;
    int arrA[sizeA];
    int arrB[sizeA];
    
    for(int i = 0; i < sizeA; i++){
        cin>>arrA[i];
    }
    
    cin>>limInf>>limSup;
    
    valueCheckerForRange(arrA, arrB, sizeA, sizeB, limInf, limSup);
    
    for(int i = 0; i < sizeB; i++){
        cout<<arrB[i]<<endl;
    }
    
    
    
    
    
    
    
    return 0;
}



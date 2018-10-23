//
//  main.cpp
//  DiagonalMatrizCuadrada -- This program recieves a 2D Array and Prints it Diagonally
//
//  Created by Jaime Hisao on 10/23/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int size; //Declares Size of Matrix and declares the Matrix
    cin>>size;
    int matriz[10][10];
    
    //Recieves the Values
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin>>matriz[i][j];
        }
    }
    
    //Prints Values in Diagonal
    for (int k = 0; k < size; k++) {
        cout<<matriz[k][k]<<endl;
    }
   
    
    
    
    
    
    return 0;
}

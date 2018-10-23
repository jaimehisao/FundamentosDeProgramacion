//
//  main.cpp
//  MayorMatriz -- Programa que lee una matriz y regresa el valor más grande de la matriz junto con su posicion.
//
//  Created by Jaime Hisao on 10/21/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

void fillMatrix(int matrix[10][10], int mX, int mY){
    
    //for loop that fills up the matrix
    for(int i = 0; i<mX; i++){
        for (int j = 0; j<mY; j++) {
            cin>>matrix[i][j];
        }
    }
}

void checkForBiggestValue(int matrix[10][10],int mX, int mY){
    int maxVal=-1000, renglon=0, column=0;
    
    for(int i = 0; i<mX; i++){ //Runs for the number of given rows
        for (int j = 0; j<mY; j++) { //Runs for the number of given columns
            if(matrix[i][j]>=maxVal){ //Checks if the value is bigger than the previous.
                maxVal = matrix[i][j];
                renglon = i;
                column = j;
            }
        }
    }
    cout<<maxVal<<" "<<renglon<<" "<<column;
}


int main(int argc, const char * argv[]) {
   
    int matrizX, matrizY; //X is the number of lines and Y of columns
    cin>>matrizX>>matrizY; //Recieves the X and Y values of the matrix
    int matrix[10][10]; //Declares the matrix
    
    fillMatrix(matrix, matrizX, matrizY);
    checkForBiggestValue(matrix, matrizX, matrizY);
    
    return 0;
}

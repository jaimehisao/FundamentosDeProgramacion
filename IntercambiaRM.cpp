//
//  main.cpp
//  IntercambiaRM -- Program that recieves a Matrix of Size A and B. And then reiceves values A and B, which corresponds to two rows which will switch places.
//
//  Created by Jaime Hisao on 10/26/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int rows, columns, a, b; //Declares the Variables
    cin>>rows>>columns; //Recieves the Variables
    int tempArr[columns]; //Filled With Values from Row A
    int matr[rows][columns]; //Matrix with the corresponding lengths
    
    //For Loop to Recieve the Values and Fill the Matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin>>matr[i][j];
        }
    }
    
    //Recieves the Values of Variables A and B
    cin>>a>>b;
    
    //For Loop to Fill Temporary Array with the value of the selected row.
    for(int i = 0; i < columns; i++){
        tempArr[i] = matr[a][i];
    }
    
    //For Loop to move the values of Row B to Row A
    for(int i = 0; i < columns; i++){
        matr[a][i] = matr[b][i];
    }

    //For Loop to Return Values of Row A to Row B
    for(int i = 0; i < columns; i++){
        matr[b][i] = tempArr[i];
    }
    
    //For Loop to Print the Values of the Matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}

//
//  main.cpp
//  FlipHM
//
//  Created by Jaime Hisao on 10/29/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
   
    int line, column;
    cin>>line>>column;
    int mat1[line][column];
    int arrTemp[column];
    
    //Recieves Value of Array
    for(int i = 0; i < line; i++){
        for (int j = 0; j < column; j++) {
            cin>>mat1[i][j];
        }
    }
    
    //Sends Values to Temporary Array for storage, then sends back, but flipped
    for(int i = 0; i < line; i++){
        for (int j = 0; j < column; j++) {
            arrTemp[j]=mat1[i][j];
        }
        //Returns Values
        int counter = 0;
        for (int k = column-1; k >=0; k--) {
            mat1[i][counter] = arrTemp[k];
            counter++;
        }
        
    }
    
    //Prints Matrix
    for(int i = 0; i < line; i++){
        for (int j = 0; j < column; j++) {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

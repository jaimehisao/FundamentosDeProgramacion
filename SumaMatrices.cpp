//
//  main.cpp
//  SumaMatrices
//
//  Created by Jaime Hisao on 10/26/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int num; //Recieves the Value for the size of the Matrix
    cin>>num;
    int mat1[num][num]; //Declares Matrix 1
    int mat2[num][num]; //Declares Matrix 2
    
    //For Loop to Recieve the first Matrix
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin>>mat1[i][j];
        }
    }
    
     //For Loop to Recieve the second Matrix
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cin>>mat2[i][j];
        }
    }
    
    //For Loop to Add both Matrixes
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            mat1[i][j] += mat2[i][j];
        }
    }
    
    //For Loop to print Matrixes
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}

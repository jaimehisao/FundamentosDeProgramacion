//
//  main.cpp
//  matrizIdentidad -- This program displays the identity matrix for a matrix of size "n". Size n*n, filled with zeroes and ones where it corresponds.
//
//  Created by Jaime Hisao on 10/26/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Variable Declaration, Recieve Values and Declare Matriz (2D) n*n;
    int num;
    cin>>num;
    int idMat[num][num];
    
    //No matrix input required for this project
    
    //Fills the Matrix with Zeroes by default and ones where they correspond, in this case, where variable i equals variable j.
    for(int i = 0; i<num; i++){
        for (int j = 0; j<num; j++) {
            if(i == j){
                idMat[i][j] = 1;
            }else{
               idMat[i][j] = 0;
            }
        }
    }
    
    //Displays Matrix by rows and columns
    for(int i = 0; i<num; i++){
        for (int j = 0; j<num; j++) {
                cout<<idMat[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}

//
//  main.cpp
//  MatrizPorColumnas
//
//  Created by Jaime Hisao on 10/23/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Declares the Variables
    int matriz[10][10];
    int lines, columns;
    cin>>lines>>columns;
    
    //Recieves the Values
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < columns; j++) {
            cin>>matriz[i][j];
        }
    }
    
    //Prints By Iterating the Columns first and then the Lines
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < lines; i++) {
            cout<<matriz[i][j]<<endl;
        }
    }
    
    return 0;
}

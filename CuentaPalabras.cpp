//
//  main.cpp
//  CuentaPalabras
//
//  Created by Jaime Hisao on 11/15/18.
//  Copyright © 2018 Jaime Hisao. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int numberOfWords = 1;
    string frase;
    getline(cin, frase);
    
    for (int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == ' '){
            numberOfWords++;
        }
//        if(strncmp(frase, " ", 100)){
//
//        }
    }
    
    cout<<numberOfWords<<endl;
    
    
    
    return 0;
}

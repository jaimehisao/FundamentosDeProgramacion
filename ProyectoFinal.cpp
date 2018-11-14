//
//  main.cpp
//  ProyectoFinalFP1
//
//  Created by Jaime Hisao and Andres  on 10/30/18.
//  Copyright © 2018 Jaime Hisao and Andres. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*---------------------------------------------*/
/*                                             */
/*    Functions to check if the user has won   */
/*                                             */
/*---------------------------------------------*/

//Done, function to verify the vertical values
bool checkVertical(int matrix[4][4]){
    bool isWinner = false;
    for(int i = 0; i < 4; i++){
            if (matrix[0][i] == 0 && matrix[1][i] == 0 && matrix[2][i] == 0 && matrix[3][i] == 0) {
                isWinner = true;
        }
    }
     return isWinner;
    }


bool checkHorizontal(){
    bool isWinner = false;
    return isWinner;
}

//Done, function to verify the diagonal values
bool checkDiagonal(int matrix[4][4]){
    bool isWinner = false;
    if (matrix[0][0] == 0 && matrix[1][1] == 0 && matrix[2][2] == 0 && matrix[3][3] == 0) {
        isWinner = true;
    }
    
    if (matrix[0][3] == 0 && matrix[1][2] == 0 && matrix[2][1] == 0 && matrix[3][0] == 0) {
        isWinner = true;
    }
    return isWinner;
}

bool checkCuantroEsquinas(int matrix[4][4]){
    bool isWinner = false;
    if(matrix[0][0] == 0 && matrix[3][0] == 0 && matrix[3][3] == 0 && matrix[0][3] == 0){
        isWinner = true;
    }
    return isWinner;
}

bool checkPocito(int matrix[4][4]){
    bool isWinner = false;
    if(matrix[1][1] == 0 && matrix[1][2] == 0 && matrix[2][1] == 0 && matrix[2][2] == 0){
        isWinner = true;
    }
    return isWinner;
}

bool checkCuadroExterior(){
    bool isWinner = false;
    return isWinner;
}

//********Function that calls the apropiate function to check the condition************
bool checkIfWinner(int option, int cardRecieved, int matrix[4][4]){
    bool isWinner = false; //By default set to false
    
    //Enters options into a Switch Case and sends the matrix as a parameter, returning a boolean with true if the matrix satisfies the conditions, false if not.
    switch (option) {
        case 1:
            isWinner = checkVertical(matrix);
            break;
        case 2:
            isWinner = checkHorizontal();
            break;
        case 3:
            isWinner = checkDiagonal(matrix);
            break;
        case 4:
            isWinner = checkCuantroEsquinas(matrix);
            break;
        case 5:
            isWinner = checkPocito(matrix);
            break;
        case 6:
            isWinner = checkCuadroExterior();
            break;
    }
    return isWinner;
}


/*---------------------------------------------*/
/*                                             */
/*    Functions that interact with the user    */
/*                                             */
/*---------------------------------------------*/

void showTable(int matrix[4][4]){
    cout<<"Tu Tabla de Juego Es:"<<endl;
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int askUserForValue(vector<int> &v){
    int value = 0;
    cout<<"Dame la carta gritada..."<<endl;
    cin>>value;
    
    //Checks if the value is an Integer
    if(cin.fail()){
         cin.clear();
         cin.ignore();
        value = askUserForValue(v); //Calls Funtion Recursively to get the value
    }
    
    //Checks if the card had already been entered into the matrix by checking if the vlaue is in the vector.
    if(find(v.begin(), v.end(), value) != v.end()) {
        cout<<"La carta: "<<value<<" ya habia salido antes...intente de nuevo"<<endl;
        value = askUserForValue(v); //Calls Funtion Recursively to get the value
    } else {
        v.push_back(value);
    }
    
    //Checks if the card is in the allowed range
    while (value>=54 || value<0){
        cout<<"Carta invalida, intente de nuevo..."<<endl;
        value = askUserForValue(v); //Calls Funtion Recursively to get the value
    }
    
    return value;
}

/*---------------------------------------------*/
/*                                             */
/*               Core Functions                */
/*                                             */
/*---------------------------------------------*/

//Function that generates a random number in the range 1 to 54
int generateRandomNumber(){
    int randNum = (rand()%60)-6;
    int absVal = abs(randNum);
    return absVal;
}

//Function that fills the matrix randomly
void fillMatrixRandomly2(int matrix[4][4]){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            //matrix[i][j] = generateRandomNumber();
             matrix[i][j] = generateRandomNumber();
        }
    }
}

//Function that adds a card to the table, @params matrix and cardRecieved
void addCardToTable(int matrix[4][4], int cardRecieved){
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= 4; j++){
            if(matrix[i][j] == cardRecieved){
                matrix[i][j] = 0;
            }
        }
    }
}


/*---------------------------------------------*/
/*                                             */
/*               Main Method                   */
/*                                             */
/*---------------------------------------------*/

int main(int argc, const char * argv[]) {
    
    int option = 0;
    int cardRecieved;
    
    cout<<"Escoja una de las siguientes opciones poniendo el numero deseado:"<<endl;
    cout<<"1.- Vertical"<<endl;
    cout<<"2.- Horizontal"<<endl;
    cout<<"3.- Diagonal"<<endl;
    cout<<"4.- Cuantro Esquinas"<<endl;
    cout<<"5.- Pocito"<<endl;
    cout<<"6.- Cuadro Exterior"<<endl;
   // cout<<"7.- Salir del Juego"<<endl;
    
    cin>>option; //Recieves the game option
    
    int matrix[4][4]; //Matrix that holds the board
    vector<int> usedCards;  //Use to store the values of the cards used
    fillMatrixRandomly2(matrix); //Calls Function To fill up array with random numbers
    showTable(matrix); //Displays the Table to the User
    
    //Do While Loop that asks the user for a card, adds the card to the table and then shows the table. The Loop runs for as long as the checkIfWinner condtion returns false.
    do {
        cardRecieved = askUserForValue(usedCards);
        addCardToTable(matrix, cardRecieved);
        showTable(matrix);
    } while (!checkIfWinner(option, cardRecieved, matrix));

    cout<<"LOTERIA"<<endl<<"Tus cartas fueron: ";
    for (int i = 0; i<usedCards.size(); i++) {
        cout<<usedCards.at(i)<<" ";
    }
    cout<<endl;
    
 return 0;
}

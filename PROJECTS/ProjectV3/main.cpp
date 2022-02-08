/* 
 * File:   main.cpp
 * Author: Shawn Chacko
 * Created on February 1st, 2022, 3:00 PM
 * Purpose:  Yahtzee V3
 *           
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>//Random Function Library
#include <iomanip>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>
using namespace std; 

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) { //starts the program
    //Initialize Random Seed once here!
    srand((unsigned)time(0));
    int dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
    int dice2 = rand() % 6+1;
    int dice3 = rand() % 6+1;
    int dice4 = rand() % 6+1; 
    int dice5 = rand() % 6+1;
   
    //Declare Variables
    int play1,play2; // 2 players playing Yahtzee 
    string yn; //asks if player wants to reroll
    int numKeep;
    int finSco1, finSco2;
    bool endTurn = false;
    int keepers1 = -1;
    int keepers2 = -1;
    int keepers3 = -1;
    int keepers4 = -1;
    int keepers5 = -1;
    
    cout<< "Welcome to the game Yahtzee" << endl; //naming the game being played
    //Player One Rolling
    cout << "Player 1's Turn: " << endl;
    cout << "After first roll: " << endl;
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    cout << "Dice 3: " << dice3 << endl;
    cout << "Dice 4: " << dice4 << endl;
    cout << "Dice 5: " << dice5 << endl;
    finSco1 = dice1 + dice2 + dice3 + dice4 + dice5;
    cout << "Total Score: " << finSco1 << endl;
    cout << "Would you like to keep any Dice? (Yes/No): ";
    cin >> yn;
    if(yn == "Yes"){
        cout << "Please select which Dice you would like to keep: ";
        cin >> numKeep;
        if(numKeep == 1){
            keepers1 = dice1;
            cout << "Saved Dice 1: " << keepers1 << endl;
        }else if(numKeep == 2){
            keepers2 = dice2;
            cout << "Saved Dice 2: " << keepers2 << endl;
        }else if(numKeep == 3){
            keepers3 = dice3;
            cout << "Saved Dice 3: " << keepers3 << endl;
        }else if(numKeep == 4){
            keepers4 = dice4;
            cout << "Saved Dice 4: " << keepers4 << endl;
        }else if(numKeep == 5){
            keepers5 = dice5;
            cout << "Saved Dice 5: " << keepers5 << endl;
        }

    }
    cout << "Would you like to reroll? (Yes/No): ";
    cin >> yn;

    if(yn == "Yes" || yn == "yes"){
        dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
        dice2 = rand() % 6+1;
        dice3 = rand() % 6+1;
        dice4 = rand() % 6+1; 
        dice5 = rand() % 6+1;
        cout << "After second roll: " << endl;
        cout << "Dice 1: " << dice1 << endl;
        cout << "Dice 2: " << dice2 << endl;
        cout << "Dice 3: " << dice3 << endl;
        cout << "Dice 4: " << dice4 << endl;
        cout << "Dice 5: " << dice5 << endl;
        finSco1 = dice1 + dice2 + dice3 + dice4 + dice5;
        cout << "Total Score: " << finSco1 << endl;
    }else if(yn == "No" || yn == "no"){
        endTurn = true;

    }
    
    if(endTurn){
        cout << "End of Player 1's Turn" << endl; // end after second turn 
    
    }
    
    if(endTurn == false){
        cout << "Would you like to reroll? (Yes/No): ";
        cin >> yn;

        if(yn == "Yes" || yn == "yes"){
            dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
            dice2 = rand() % 6+1;
            dice3 = rand() % 6+1;
            dice4 = rand() % 6+1; 
            dice5 = rand() % 6+1;
            cout << "After third roll: " << endl;
            cout << "Dice 1: " << dice1 << endl;
            cout << "Dice 2: " << dice2 << endl;
            cout << "Dice 3: " << dice3 << endl;
            cout << "Dice 4: " << dice4 << endl;
            cout << "Dice 5: " << dice5 << endl;
            finSco1 = dice1 + dice2 + dice3 + dice4 + dice5;
            cout << "Total Score: " << finSco1 << endl;
            cout << "End of Player 1's Turn" << endl;
        }else if(yn == "No" || yn == "no"){
            cout << "End of Player 1's Turn" << endl;

    }
    }
    
        
    
    
    //Player Two Rolling 
    cout << "Player 2's Turn: " << endl;
    dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
    dice2 = rand() % 6+1;
    dice3 = rand() % 6+1;
    dice4 = rand() % 6+1; 
    dice5 = rand() % 6+1;
    cout << "After first roll: " << endl;
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    cout << "Dice 3: " << dice3 << endl;
    cout << "Dice 4: " << dice4 << endl;
    cout << "Dice 5: " << dice5 << endl;
    finSco2 = dice1 + dice2 + dice3 + dice4 + dice5;
    cout << "Total Score: " << finSco2 << endl;
    cout << "Would you like to keep any Dice? (Yes/No): ";
    cin >> yn;
    if(yn == "Yes"){
        cout << "Please select which Dice you would like to keep: ";
        cin >> numKeep;
        if(numKeep == 1){
            keepers1 = dice1;
            cout << "Saved Dice 1: " << keepers1 << endl;
        }else if(numKeep == 2){
            keepers2 = dice2;
            cout << "Saved Dice 2: " << keepers2 << endl;
        }else if(numKeep == 3){
            keepers3 = dice3;
            cout << "Saved Dice 3: " << keepers3 << endl;
        }else if(numKeep == 4){
            keepers4 = dice4;
            cout << "Saved Dice 4: " << keepers4 << endl;
        }else if(numKeep == 5){
            keepers5 = dice5;
            cout << "Saved Dice 5: " << keepers5 << endl;
        }

    }
    cout << "Would you like to reroll? (Yes/No): ";
    cin >> yn;

    if(yn == "Yes" || yn == "yes"){
        dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
        dice2 = rand() % 6+1;
        dice3 = rand() % 6+1;
        dice4 = rand() % 6+1; 
        dice5 = rand() % 6+1;
        cout << "After second roll: " << endl;
        cout << "Dice 1: " << dice1 << endl;
        cout << "Dice 2: " << dice2 << endl;
        cout << "Dice 3: " << dice3 << endl;
        cout << "Dice 4: " << dice4 << endl;
        cout << "Dice 5: " << dice5 << endl;
        finSco2 = dice1 + dice2 + dice3 + dice4 + dice5;
        cout << "Total Score: " << finSco2 << endl;
    }else if(yn == "No" || yn == "no"){
        endTurn = true;

    }
    
    if(endTurn){
        cout << "End of Player 2's Turn" << endl; // end after second turn 
    
    }
    
    if(endTurn == false){
        cout << "Would you like to reroll? (Yes/No): ";
        cin >> yn;

        if(yn == "Yes" || yn == "yes"){
            dice1 = rand() % 6+1; //dice 1-6 indicates the dice faces 
            dice2 = rand() % 6+1;
            dice3 = rand() % 6+1;
            dice4 = rand() % 6+1; 
            dice5 = rand() % 6+1;
            cout << "After third roll: " << endl;
            cout << "Dice 1: " << dice1 << endl;
            cout << "Dice 2: " << dice2 << endl;
            cout << "Dice 3: " << dice3 << endl;
            cout << "Dice 4: " << dice4 << endl;
            cout << "Dice 5: " << dice5 << endl;
            finSco2 = dice1 + dice2 + dice3 + dice4 + dice5;
            cout << "Total Score: " << finSco2 << endl;
            cout << "End of Player 2's Turn" << endl;
        }else if(yn == "No" || yn == "no"){
            cout << "End of Player 2's Turn" << endl;

    }
    }
    
    if(finSco1 > finSco2){
        cout << "Player 1 wins with a score of " << finSco1;   
    }else if(finSco1 < finSco2){
        cout << "Player 2 wins with a score of " << finSco2;
    }else{
        cout << "Both players have a score of " << finSco1;
        
    }
    //Initialize Variables

    //Map the inputs/known to the outputs
    
    //Display the outputs
    
    
    //Exit the program
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Shawn Chacko
 * Created on Febuary 9, 2022, 5:50 PM
 * Purpose:  Project 2 
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
#include <vector>
using namespace std; 

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
vector<int> DiceVal(vector<int> val);
void printVal(vector<int> val);
void keepers(vector<int>, string ans);
void newDice(vector<int> val);
vector<int> repKper(vector<int>, vector<int>);
//Execution begins here!
int main(int argc, char** argv) { //starts the program
    //Initialize Random Seed once here!
    srand((unsigned)time(0));
   
    //Declare Variables
    vector<int> play1;
    vector<int> dice;
    vector<int> play2(5,0);
    string yn; //asks if player wants to reroll
    int numKeep;
    int finSco1 = 0, finSco2 = 0;
    
    cout<< "Welcome to the game Yahtzee" << endl; //naming the game being played
    //Player One Rolling
    cout << "Player 1's Turn: " << endl;
    for(int i = 0; i < 5; i++){
        play1.push_back(rand() % 6 + 1);
        finSco1 += play1.at(i);
    }
    printVal(play1);
    cout << "Total Score: " << finSco1 << endl;
    cout << "Would you like to roll again?:(Yes/No): ";
    cin >> yn;
    if(yn == "Yes"){
        cout << "Would you like to keep any dice?(Yes/No): ";
        cin >> yn;
        keepers(play1, yn);
        for(int i = 0; i < 5; i++){
            dice.push_back(rand() % 6 + 1);
        }
        printVal(dice);
        for(int i = 0; i < play1.size(); i++){
            if(play1.at(i) < 0){
                play1.at(i) = dice.at(i);
            }else{
                dice.at(i) = play1.at(i);
                
            }
        }
        cout << endl;
        printVal(play1);
        
        
    }else if(yn == "No"){
        cout << "End of Player 1's turn" << endl;
        cout << "Total Score: " << finSco1 << endl;
    }
    return 0;
}

vector<int> DiceVal(vector<int> val){
    for(unsigned int i = 0; i < 5; i++){
        val.push_back(rand() % 6 + 1);
//        cout << "Dice " << i + 1 << ": " << val.at(i) << endl;
    }
    
    return val;
    
}

void printVal(vector<int> val){
    unsigned int i = 0 ;
    int j = i + 1;
    for(i = 0; i < val.size(); i++){
        
        cout << "Dice " << j << ": " << val.at(i) << endl;
        j++;
        
        
    }
    
    
    
}

void keepers(vector<int> val, string ans){
    int num;
    int track = 0;
    if(ans == "Yes"){
        cout << "Which dice would you like to keep?(1-5)(Type -1 if you are done selecting): ";
        cin >> num;
        while(num != -1){
            if(track == 4){
                break;
            }
            while(track != 4){
                if(num == 1 || num == 2 || num == 3 || num == 4 || num == 5){
                    val.at(num - 1) *= -1;
                    track++;
                    cout << "Please keep selecting or type -1 if you are done: ";
                    cin >> num;
                }else if(num == -1){
                    break;
                }else{
                    cout << "Please enter a valid number" << endl;
                    cin >> num;
                }
            }
        }
            
        
        
    }
    if(ans == "No" || num == -1 || track == 4){
        cout << "First roll is complete!" << endl;
        cout << "Dice after first roll: " << endl;
        for(int i = 0; i < val.size(); i++){
            if(val.at(i) < 0){
                cout << "Dice " << i + 1 << ": " << -1 * val.at(i) << '*' << endl;
            }else{
                cout << "Dice " << i + 1 << ": " << val.at(i) << endl;
            }
        }
        cout << "(* signifies a keeper)" << endl;
    }

}

vector<int> repKper(vector<int> player, vector<int> dice){
    for(int i = 0; i < player.size(); i++){
        if(player.at(i) < 0){
            player.at(i) = dice.at(i);
        }
    }
    return player;
}

/* 
 * File:   main.cpp
 * Author: Shawn Chacko
 * Created on January 29, 2022, 11:20 AM
 * Purpose:  Yahtzee V1
 *           
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Function Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand((unsigned)time(0));
    int roll1=rand()%6+1;
    int roll2=rand()%6+1;
    int roll3=rand()%6+1;
    int roll4=rand()%6+1;
    int roll5=rand()%6+1;
    int roll6=rand()%6+1;
    //Declare Variables
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs

    //Exit the program
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Shawn Chacko
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  Test Score Average
 *           
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Set the random number seed
    const int Num_Of_Score = 5;
    
    //Declare Variables
    float score_1, score_2, score_3,score_4,score_5,average,total;
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average. " << endl;
    cin.get();
    cout << endl;
    
    //Map inputs -> outputs
    cout << "Enter score #1:  ";
    cin >> score_1;
    cout<< "Enter score #2:  ";
    cin >> score_2;
    cout<< "Enter score #3:  ";
    cin >> score_3;
    cout<< "Enter score #4:  ";
    cin >> score_4;
    cout<< "Enter score #5:  ";
    cin >> score_5;
    
    total = score_1 + score_2 + score_3 + score_4 + score_5;
    average = total / Num_Of_Score;
    
    cout<< setprecision(1) << fixed;
    
  
    //Display the outputs
    
   cout << "The average test score is ";
   cout<< average << "  " << endl;
    
    //Exit stage right or left!
    return 0;
}



/* 
 * File:   main.cpp
 * Author: Shawn Chacko
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  Test Score Average
 *           
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //Set the random number seed
    const int Num_Of_Score = 5;
    cin.get();
    //Declare Variables
    float num1, num2, num3, num4, num5, average,total;
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl;

    //Map inputs -> outputs
    
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    
    total = num1 + num2 + num3 + num4 + num5;
    average = total / Num_Of_Score;
    
    cout<< setprecision(1) << fixed;
    
  
    //Display the outputs
    
   cout << "The average = ";
   cout << average << endl;
    
    //Exit stage right or left!
    return 0;

    
    
    NUMBER 2
    /* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomainp> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    const int num4;
    float num4;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout << "Calorie Counter";endl
cout << "How many cookies did you eat?";endl
cout << "You consumed 300 calories."
    //Exit stage right or left!
    return 0;
}
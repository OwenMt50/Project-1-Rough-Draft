//Created by Owen Martin
//Date: 2/22

//Description: 3 unique measurements within the imperial system that are shown in feet from user input

#include <iostream>

using namespace std;

int main () {
//Below this comment is a table of where the user input, and initial measurements lie before being calculated
    int feet1 = 8;
    int horselength = 0;
    int answer1 = 0;
    int feet2 = 3;
    int yard1 = 0;
    int answer2 = 0;
    int yard2 = 220;
    int furlong = 0;
    int answer3 = 0;
    int coolanswer = 0;
    int extrafeet = 3;

//User inputs the amount of horse lengths they want to be converted into feet
    cout<<"How many horse lengths would you like to convert into feet?: ";
    cin>>horselength;
    answer1 = feet1*horselength;
    cout<<"In "<<horselength<<" horse length(s) you will rougly have "<<answer1<<" feet.""\n";


//This is converting yards into feet
    cout<<"What is the amount of yards you would like to convert?: ";
    cin>>yard1;
    answer2 = feet2*yard1;
    cout<<"You will exactly have "<<answer2<<" feet.""\n";


//Converting furlongs into yards
    cout<<"How many furlongs would you like to convert into yards?: ";
    cin>>furlong;
    answer3 = yard2*furlong;
    cout<<"There are "<<answer3<<" yards in "<<furlong<<" furlongs.""\n";

    //Added in an extra piece of code that converts the yards from furlongs into feet
    coolanswer = extrafeet*answer3;
    cout<<"In case you wanted to know. There are about "<<coolanswer<<" feet in "<<answer3<<" yards.";
}
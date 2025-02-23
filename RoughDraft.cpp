//Created by Owen Martin
//Date: 2/22

//Description: Standard unit of measurement is selected (feet) and is converted into a unique/silly unit of measurement

#include <iostream>

using namespace std;

int main() {

    int horselength = 8;
    int feethorse = 0;
    int answer1 = 0;

    cout<<"One horse length is every eight feet. How much feet would you like to input? ";
    cin>>feethorse;
    answer1 = feethorse/horselength;
    cout<<"You will approximately have "<<answer1<<" horse length(s).""\n";

    int yard = 3;
    int yardfeet = 0;
    int answer2 = 0;

    cout<<"A yard in the imperial measuring system is three feet. Please input the amount of feet you wish to use ";
    cin>>yardfeet;
    answer2 = yardfeet/yard;
    cout<<"You have been given "<<answer2<<" yard(s) with your input of "<<yardfeet<<" feet.""\n";

    int furlong = 220;
    int yards = 0;
    int answer3 = 0;
    
    cout<<"A furlong measures about 220 yards. Input the amount of yards you wish to use. ";
    cin>>yards;
    answer3 = yards/furlong;
    cout<<"You have "<<answer3<<" furlong(s).""\n";
    
    cout<<"If you were given a value of 0 that is because your input(s) were below the required amount stated for a unique measurement.";
}
//
//  dayType.cpp
//  dayType
//
//  Created by darst king on 7/15/20.
//  Copyright © 2020 darst king. All rights reserved.
//

/*
 dayType(int day);
 void setDay(int x);
 int getDay();
 int nextDay();
 int previousDay();
 int calcDay(int x);
 

 */


#include <iostream>
#include "dayType.hpp"
using namespace std;

dayType::dayType(int day){
    if (day < 0 || day >7){
        cout<<"Please enter a day between 0 (Monday) and 6 (Sunday)"<<endl;
        exit(5);
    }
    this->day = day;
}

void dayType::setDay(int x){
    if (x > 7){
        cout<<"Please enter a day between 0 (Monday) and 6 (Sunday)"<<endl;
    } else{
        this->day = x;
    }
}

int dayType::getDay(){
    readDay();
    return this->day;
}

int dayType::nextDay(){
    int newDay = 0;
    newDay = this->day +1;
    newDay = newDay %7;
    readDay(newDay);
    return newDay;
}

int dayType::previousDay(){
    int newDay = 0;
    newDay = this->day-1;
    if (newDay < 0){
        newDay = 6;
    }
    readDay(newDay);
    return newDay;
}

int dayType::calcDay(int x){
    int newDay = 0;
    newDay = this->day + x;
    newDay = newDay%7;
    readDay(newDay);
    return newDay;
}

void dayType::readDay(int day){
    
    
    int switchArg;
    if (day ==-1){
        switchArg = this->day;
        
    }else {
        switchArg = day;
    }
    
    switch(switchArg){
        case 0:
            cout<<"Monday";
            cout<<endl;
            break;
        case 1:
            cout<<"Tuesday";
            cout<<endl;
            break;
        case 2:
            cout<<"Wednesday";
            cout<<endl;
            break;
        case 3:
            cout<<"Thursday";
            cout<<endl;
            break;
        case 4:
            cout<<"Friday";
            cout<<endl;
            break;
        case 5:
            cout<<"Saturday";
            cout<<endl;
            break;
        case 6:
            cout<<"Sunday";
            cout<<endl;
            break;
            
    }
    
    
    
}

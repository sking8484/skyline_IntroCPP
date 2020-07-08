//
//  main.cpp
//  carsCodingProject
//
//  Created by darst king on 6/22/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

/*
 
 Finding the distance between two cars from one point. The distance formula is ((X2-X1)^2 + (Y2 -Y1)^2)^(1/2)
 
 Car A is traveling due west (-t*avg speed,0), car B is traveling due south (0,-t*avg_speed).
 
 */

int main() {
    //time is in hours and minutes
    double timeElapsed,hoursElapsed,minutesElapsed,avgSpeedA,avgSpeedB;
    double Ax,Ay,Bx,By;
    double distance;
    
    cout<<"Please enter the average speed of A (in Miles per Hour): ";
    cin>>avgSpeedA;
    cout<<"Please enter the average speed of B (in Miles per Hour): ";
    cin>>avgSpeedB;
    
    cout<<"Please enter the hours and press enter: ";
    cin>>hoursElapsed;
    cout<<"Please enter the minutes and press enter: ";
    cin>>minutesElapsed;
    
    //Time elapsed in minutes
    timeElapsed = hoursElapsed*60 + minutesElapsed;
    Ax = -1.0*avgSpeedA/60.0*timeElapsed;
    Ay = 0;
    Bx = 0;
    By = -1.0*avgSpeedB/60*timeElapsed;
    
    distance = pow(pow(Bx-Ax,2)+pow(By-Ay,2),.5);
    
    cout<<"The distance between the two is "<<distance<<" over the course of "<<hoursElapsed<< " hours and "<<minutesElapsed<< " minutes"<<endl;
    
    
    return 0;
}

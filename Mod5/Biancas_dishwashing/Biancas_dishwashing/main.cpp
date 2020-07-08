//
//  main.cpp
//  Biancas_dishwashing
//
//  Created by darst king on 6/28/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    /*
     We will need a few things here, including a counter for the number of dishes, as well as a current time variable, and a current increment variable
     */
    //Initializing the needed variables and counters
    int first_dish_time,time_increment,maxtime,dishtime;
    int num_dishes = 0;
    int current_time = 0;
    
    //Requesting input from the user to define the time needed by the first dish, the time increment and the amount of time Bianca has.
    
    cout<<"Please enter the minutes needed to complete the first dish"<<endl;
    cin>>first_dish_time;
    cout<<"Please enter the time increment over the first dish"<<endl;
    cin>>time_increment;
    cout<<"Please enter the amount of time that Bianca has to cook"<<endl;
    cin>>maxtime;
    
    dishtime = first_dish_time;
    
    while (current_time<maxtime){
        current_time += dishtime;
        
        if (current_time>maxtime)
            break;
        num_dishes++;
        dishtime += time_increment;
    }
    
    cout<<"Bianca can make "<<num_dishes<<" dishes"<<endl;
    
    return 0;
}

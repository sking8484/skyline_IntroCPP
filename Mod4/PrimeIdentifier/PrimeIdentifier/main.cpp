//
//  main.cpp
//  PrimeIdentifier
//
//  Created by darst king on 6/25/20.
//  Copyright © 2020 darst king. All rights reserved.
//

//A prime number identifier
#include <iostream>
using namespace std;
int main() {
    //Prompt user to enter a number between 0 and 1000
    int userInput;
    //binary variable to tell whether the variable is prime or not
    bool prime = true;
    
    cout<<"Please enter an integer between 0 and 1000: ";
    cin>>userInput;
    
    if (userInput%2 ==0 && userInput != 2){
        prime = false;
        cout<<"The number is divisible by 2"<<endl;
    }
    if (userInput%3==0 && userInput != 3){
        prime = false;
        cout<<"The number is divisible by 3"<<endl;
    }
    if (userInput%5==0 && userInput != 5){
        prime = false;
        cout<<"The number is divisible by 5"<<endl;
    }
    if (userInput%7==0 && userInput != 7){
        prime = false;
        cout<<"The number is divisible by 7"<<endl;
    }
    if (userInput%11==0 && userInput != 11){
        prime = false;
        cout<<"The number is divisble by 11"<<endl;
    }
    if (userInput%13==0 && userInput != 13){
        prime = false;
        cout<<"The number is divisble by 13"<<endl;
    }
    if (userInput%17==0 && userInput != 17){
        prime = false;
        cout<<"The number is divisible by 17"<<endl;
    }
    if (userInput%19==0 && userInput != 19){
        prime = false;
        cout<<"the number is divisible by 19"<<endl;
    }
    if (userInput%23==0 && userInput != 23){
        prime = false;
        cout<<"The number is divisible by 23"<<endl;
        
    }
    if (userInput%29==0 && userInput != 29){
        prime = false;
        cout<<"The number is divisible by 29"<<endl;
    }
    if (userInput%31==0 && userInput != 31){
        prime = false;
        cout<<"The number is divisible by 31"<<endl;
    }
    if (prime == true){
        cout<<"The number "<<userInput<<" is a prime number!"<<endl;
    }
    return 0;
}

//
//  main.cpp
//  fractionCalculator
//
//  Created by darst king on 7/7/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

void addFractions(int num1, int denom1, int num2, int denom2,int array[]);
void subtractFractions(int num1, int denom1, int num2, int denom2, int array[]);
void multiplyFractions(int num1, int denom1, int num2, int denom2, int array[]);
void divideFractions(int num1, int denom1, int num2, int denom2, int array[]);

int main() {
    
    int array[2];
    int num1,denom1,num2,denom2;
    
    
    
    cout<<"Welcome to the fraction calculator. Just follow the prompts to calculate your fractions"<<endl;
    cout<<endl;
    
    
    cout<<"Please enter the first fractions numerator followed by it's denominator"<<endl;
    cin>>num1>>denom1;
    cout<<"Please enter the second fractions numerator followed by it's denominator"<<endl;
    cin>>num2>>denom2;
    
    if (denom1==0||denom2==0){
        cout<<"Division by 0 error";
        exit(2);
    }
    
    cout<<endl;
    cout<<"1. - Add Fractions"<<endl;
    cout<<"2. - Subtract Fractions"<<endl;
    cout<<"3. - Multiply Fractions"<<endl;
    cout<<"4. - Divide Fractions"<<endl;
    
    int option;
    cin>>option;
    
    switch (option)
    {
        case 1:
        {
            addFractions(num1,denom1,num2,denom2,array);
            break;
        }
        case 2:
        {
            subtractFractions(num1, denom1, num2, denom2, array);
            break;
        }
        case 3:
        {
            multiplyFractions(num1, denom1, num2, denom2, array);
            break;
        }
        case 4:
        {
            divideFractions(num1, denom1, num2, denom2, array);
            break;
        }
            
        default:
        {
            cout<<"You entered an invalid choice";
            exit(1);
        }
    }
    
    cout<<array[0]<< "\\"<<array[1]<<endl;
    
    return 0;
}


void addFractions(int num1, int denom1, int num2, int denom2,int array[]){
    int newnum1, newnum2, newdenom;
    
    
    if (denom1 == denom2){
        array[0] = num1+num2;
        array[1] = denom1;
    } else {
        newnum1 = num1*denom2;
        newnum2 = num2*denom1;
        newdenom = denom1*denom2;
        array[0] = newnum1 + newnum2;
        array[1] = denom1*denom2;
    }
    
}


void subtractFractions(int num1, int denom1, int num2, int denom2, int array[]){
    int newnum1, newnum2, newdenom;
    
    if (denom1 == denom2){
        array[0] = num1-num2;
        array[1] = denom1;
    } else {
        newnum1 = num1*denom2;
        newnum2 = num2*denom1;
        newdenom = denom1*denom2;
        array[0] = newnum1 - newnum2;
        array[1] = denom1*denom2;
    }
    
}

void multiplyFractions(int num1, int denom1, int num2, int denom2, int array[]){
    array[0] = num1*num2;
    array[1] = denom1*denom2;
}

void divideFractions(int num1, int denom1, int num2, int denom2, int array[]){
    array[0] = num1*denom2;
    array[1] = num2*denom1;
    
}

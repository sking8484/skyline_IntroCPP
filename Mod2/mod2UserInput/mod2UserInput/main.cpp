//
//  main.cpp
//  mod2UserInput
//
//  Created by darst king on 6/17/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;
const int NUMBER = 12;

int main() {
    int firstNum;
    int secondNum;
    
    firstNum = 18;
    cout<< "Line 9: firstNum = " << firstNum<<endl;
    cout<<"Line 10: Enter an integer: ";
    cin>>secondNum;
    cout<<endl;
    
    cout<<"Line 13: secondNum = " << secondNum<<endl;
    firstNum = firstNum + NUMBER + 2*secondNum;
    cout<<"Line 15: The new value of firstNum = " <<firstNum<<endl;
   
    return 0;
}

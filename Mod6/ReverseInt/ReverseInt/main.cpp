//
//  main.cpp
//  ReverseInt
//
//  Created by darst king on 6/29/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

int reverseDigit(int x){
    int new_num=0;
    int remainder;

    while (x!=0){
        remainder = x%10;
        new_num = new_num*10+remainder;
        x=x/10;
    }
    
    return new_num;
    
}

int main() {
    int num;
    cout<<"Please enter an integer that you would like reversed; \n";
    cin>>num;
    
    
    cout<<"The reversed number is "<<reverseDigit(num)<<endl;
    
    
    
    return 0;
}

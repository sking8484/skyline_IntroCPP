//
//  largeIntClass.hpp
//  largeInt
//
//  Created by darst king on 7/21/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#ifndef largeIntClass_hpp
#define largeIntClass_hpp
#include <string>
#include <stdio.h>
using namespace std;

class largeInteger{
private:
    string num;
    int length;
    int *p;
    int *q;
    int *k;
    
public:
    largeInteger(string num);
    void showArray();
    void addArrays(largeInteger x);
    void reverse(int *x=NULL,int length=0);
    
    
};

#endif /* largeIntClass_hpp */

//
//  main.cpp
//  matrixCalculator
//
//  Created by darst king on 7/27/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
#include "Matrix.hpp"
using namespace std;

int main() {
    Matrix mymat(2,3);
    Matrix yourmat(4,2);
    Matrix newmat;
    cin>>mymat;
    cin>>yourmat;
    
    cout<<mymat;
    cout<<yourmat;
    
    cout<<"A dot product failure:";
    cout<<endl;
    
    newmat = mymat*yourmat;
    
    cout<<newmat;
    return 0;
}

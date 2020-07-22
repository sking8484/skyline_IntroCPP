//
//  main.cpp
//  largeInt
//
//  Created by darst king on 7/21/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
#include "largeIntClass.hpp"

int main() {
    largeInteger li("3205");
    largeInteger nli("255");
    
    li.addArrays(nli);
    
    return 0;
}

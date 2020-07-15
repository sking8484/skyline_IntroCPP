//
//  main.cpp
//  dayType
//
//  Created by darst king on 7/15/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include "dayType.hpp"

#include <iostream>

int main() {
    dayType dayVar(6);
    dayVar.readDay();
    dayVar.setDay(2);
    dayVar.readDay();
    dayVar.nextDay();
    dayVar.previousDay();

    dayVar.calcDay(22);
    
    return 0;
}

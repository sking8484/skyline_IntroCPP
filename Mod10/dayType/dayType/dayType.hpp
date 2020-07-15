//
//  dayType.hpp
//  dayType
//
//  Created by darst king on 7/15/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#ifndef dayType_hpp
#define dayType_hpp

#include <stdio.h>

class dayType {
private:
    int day;
    
public:
    dayType(int day);
    void setDay(int x);
    int getDay();
    int nextDay();
    int previousDay();
    int calcDay(int x);
    void readDay(int day=-1);
    
};

#endif /* dayType_hpp */

//
//  cylinderType.hpp
//  shippingLiquids
//
//  Created by darst king on 7/20/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#ifndef cylinderType_hpp
#define cylinderType_hpp

#include <stdio.h>

class cylinderType {
  
private:
    double radius;
    double height;
    
public:
    cylinderType(double radius, double height);
    void setRadius(int radius);
    void setHeight(int height);
    
    double getRadius();
    double getHeight();
    
    double surfaceArea();
    double volume();
};

#endif /* cylinderType_hpp */

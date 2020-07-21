//
//  shippingContainer.hpp
//  shippingLiquids
//
//  Created by darst king on 7/20/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#ifndef shippingContainer_hpp
#define shippingContainer_hpp
#include "cylinderType.hpp"
#include <stdio.h>

class shippingContainer:public cylinderType{
private:
    double shippingCost;
    double paintCost;
    int paint;
    
public:
    shippingContainer(double radius, double height, double shippingCost, double paintCost, int paint);
    double * calculateCost();
};

#endif /* shippingContainer_hpp */

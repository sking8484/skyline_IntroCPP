//
//  shippingContainer.cpp
//  shippingLiquids
//
//  Created by darst king on 7/20/20.
//  Copyright © 2020 darst king. All rights reserved.
//


//    double shippingCost;
//    double paintCost;
//    int paint;
//
//public:
//    shippingContainer(double radius, double height, double shippingCost, double paintCost, bool pain);
//    double calculateCost();


#include "shippingContainer.hpp"
#include "cylinderType.hpp"

shippingContainer::shippingContainer(double radius, double height, double shippingCost, double paintCost, int paint):cylinderType(radius,height){
    this->shippingCost = shippingCost;
    this->paintCost = paintCost;
    this->paint = paint;
    
}

double * shippingContainer::calculateCost(){
    double liquidAmount,sa;
    
    static double arr[2] = {0};
    
    
    liquidAmount = volume();
    sa = surfaceArea();
    
    arr[0] = liquidAmount*this->shippingCost;
    arr[1] = sa*this->paintCost;
    
    return arr;
}

//
//  cylinderType.cpp
//  shippingLiquids
//
//  Created by darst king on 7/20/20.
//  Copyright © 2020 darst king. All rights reserved.
//


//
//private:
//    double radius;
//    double height;
//
//public:
//    cylinderType(double radius, double height);
//    void setRadius(int radius);
//    void setHeight(int height);
//
//    double getRadius();
//    double getHeight();

#include "cylinderType.hpp"

cylinderType::cylinderType(double radius, double height){
    this-> radius = radius;
    this->height = height;
}

void cylinderType::setRadius(int radius){
    this->radius = radius;
    
}

void cylinderType::setHeight(int height){
    this->height = height;
}

double cylinderType::getRadius(){
    return this->radius;
}

double cylinderType::getHeight(){
    return this->height;
}

double cylinderType::surfaceArea(){
    double area=0;
    area = 3.141592653*this->radius*2;
    return area;
}

double cylinderType::volume(){
    double volume = 0;
    volume = 3.141592653*this->radius*this->radius*this->height;
    return volume;
}

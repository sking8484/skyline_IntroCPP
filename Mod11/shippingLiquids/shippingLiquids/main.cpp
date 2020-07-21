//
//  main.cpp
//  shippingLiquids
//
//  Created by darst king on 7/20/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include "cylinderType.hpp"
#include "shippingContainer.hpp"
#include <iostream>
using namespace std;
int main() {
    double *costArray;
    double total = 0;
    
    string V;
    V = "Welcome to Amanda & Tyler's shipping. \nPlease enter the following values to calculate your pricing. We will first need the radius of the cylinder, followed by the height. \nWe will then need you to enter the shipping cost and the paint cost. \nLastly, please enter whether you would like us to paint the product\n";
    cout<<endl;
    
    cout<<V;
    cout<<endl;
    
    double radius,height,shipcost,paintcost,paint;
    
    cout<<"Please enter the radius: ";
    cin>>radius;
    cout<<endl;
    
    cout<<"Please enter the height: ";
    cin>>height;
    cout<<endl;
    
    cout<<"Please enter the shipping cost: ";
    cin>>shipcost;
    cout<<endl;
    
    cout<<"Please enter the paint cost: ";
    cin>>paintcost;
    cout<<endl;
    
    cout<<"Please enter 0 for no painting, and anything else for painting";
    cin>>paint;
    cout<<endl;
    
    shippingContainer container(radius,height,shipcost,paintcost,paint);
    
    costArray = container.calculateCost();
    
    cout<<"Your shipping price is estimated to be: "<<(int)(100*costArray[0])/100.0;
    cout<<endl;
    cout<<"Your painting price is estimated to be: "<<(int)(100*costArray[1])/100.0;
    cout<<endl;
    if (paint!=0){
        total = costArray[0] + costArray[1];
    }
    else {
        total = costArray[0];
    }
    cout<<endl;
    cout<<"Your total is estimated to be: "<<(int)(100*total)/100.0;
    cout<<endl;
    
    return 0;
}

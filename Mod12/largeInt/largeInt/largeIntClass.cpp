//
//  largeIntClass.cpp
//  largeInt
//
//  Created by darst king on 7/21/20.
//  Copyright © 2020 darst king. All rights reserved.
//

//class largeInteger{
//private:
//    string num;
//    int length;
//    int *p = nullptr;
//
//public:
//    largeInteger(string num);
//    void showArray();


#include "largeIntClass.hpp"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

largeInteger::largeInteger(string num){
    this->length = num.size();
    
    this->num = num;
    p = new int[this->length];
    char placeHolder;
    
    for (int j = 0; j<this->length;j++){
        placeHolder = num[j];
        p[j] =  placeHolder - 48;
    }
}

void largeInteger::showArray(){
    for (int i =0;i<this->length;i++){
        cout<<p[i];
    }
    cout<<endl;
}

void largeInteger::reverse(int *x,int length){
    if (x==NULL){
        x = p;
    }
    q = new int[this->length];
    
    int j = 0;
    for (int i = this->length-1;i>=0;i--){
        //cout<<x[j];
        
        q[i] = x[j];
        j++;
    }
    for (int k=0;k<this->length;k++){
        //cout<<q[k];
    }
    //cout<<endl;
    p = q;
    q = NULL;
}

void largeInteger::addArrays(largeInteger x){
    int excess = 0;
    int biggest = 0;
    
    
    reverse(p,this->length);
    x.reverse(x.p,x.length);
    
   
    
    biggest = (this->length > x.length) ? this->length:x.length;
    k = new int[biggest*10];
    
    for (int i=0;i<biggest;i++){
       
        
        if (i>=this->length){
            k[i] = x.p[i] + excess;
            excess = 0;
        } else if (i>=x.length){
            k[i] = this->p[i] + excess;
            excess = 0;
        }else {
            k[i] = x.p[i] + this->p[i];
            
            k[i] = k[i]%10;
            k[i] = k[i] + excess;
            if (x.p[i] + this->p[i]>9){
                excess = 1;
            } else {
                excess = 0;
            }
            
        }
        //cout<<k[i];
    }
    
    this->length = biggest;
    
    reverse(k,biggest);
    showArray();
    
}





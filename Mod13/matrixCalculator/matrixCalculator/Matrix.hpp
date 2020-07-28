//
//  Matrix.hpp
//  matrixCalculator
//
//  Created by darst king on 7/27/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Matrix{
private:
    int rows;
    int columns;
    int **mat;
public:
    Matrix(int, int);
    Matrix();
    friend istream& operator>>(istream&, Matrix&);
    friend ostream& operator <<(ostream&, Matrix&);
    Matrix copy();
    Matrix operator+(const Matrix&) const;
    Matrix operator-(const Matrix&) const;
    Matrix operator*(const Matrix&) const;
};

#endif /* Matrix_hpp */

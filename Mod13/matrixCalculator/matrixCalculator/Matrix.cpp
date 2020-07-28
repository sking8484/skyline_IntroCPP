//
//  Matrix.cpp
//  matrixCalculator
//
//  Created by darst king on 7/27/20.
//  Copyright © 2020 darst king. All rights reserved.
//


//class Matrix{
//private:
//    int rows;
//    int columns;
//    int **mat;
//public:
//    Matrix(int rows, int columns);
//    friend istream& operator>>(istream& in, Matrix& matclass);
//    friend ostream& operator <<(ostream& out, Matrix& matclass);
//    Matrix copy();
//
//  Matrix operator+(const Matrix&) const;
//
//  Matrix operator-(const Matrix&) const;
//  Matrix operator*(const Matrix&) const;
//
//
//
//};


#include "Matrix.hpp"
#include <iostream>
using namespace std;

Matrix::Matrix(){

};

Matrix::Matrix(int rows, int columns){
    this->rows = rows;
    this->columns = columns;
    
    mat = new int* [rows];
    for (int i =0;i<rows;i++){
        mat[i] = new int[columns];
    }
}

istream& operator>>(istream& isObject, Matrix& matrix){
    for (int i=0;i<matrix.rows;i++){
        for (int j=0;j<matrix.columns;j++){
            isObject>>matrix.mat[i][j];
        }
    }
    
    return isObject;
    
}

ostream & operator<<(ostream& osObject, Matrix& matrix){
    for (int i=0;i<matrix.rows;i++){
        for (int j=0;j<matrix.columns;j++){
            osObject<<matrix.mat[i][j];
            osObject<<" ";
        }osObject<<endl;
    }
    
    return osObject;
}

Matrix Matrix::copy(){
    return *this;
}

Matrix Matrix::operator+(const Matrix& otherMatrix) const{
    Matrix tempMat(rows,columns);
    if (rows == otherMatrix.rows && columns==otherMatrix.columns){
        for (int i=0;i<rows;i++){
            for (int j=0;j<columns;j++){
                tempMat.mat[i][j] = mat[i][j]+otherMatrix.mat[i][j];
            }
        }
    }
    else{
        cout<<"The dimensions do not match";
    }
    
    return tempMat;
    
}


Matrix Matrix::operator-(const Matrix& otherMatrix) const{
    Matrix tempMat(rows,columns);
    if (rows == otherMatrix.rows && columns==otherMatrix.columns){
        for (int i=0;i<rows;i++){
            for (int j=0;j<columns;j++){
                tempMat.mat[i][j] = mat[i][j]-otherMatrix.mat[i][j];
            }
        }
    }
    else{
        cout<<"The dimensions do not match";
    }
    
    return tempMat;
    
}

Matrix Matrix::operator*(const Matrix& otherMatrix) const{
    Matrix tempMat(rows,otherMatrix.columns);
    
    
    if (columns == otherMatrix.rows){
        for (int i=0;i<rows;i++){
            
            for(int k=0;k<otherMatrix.columns;k++){
                int sum = 0;
                for (int j=0;j<columns;j++){
                    sum+=(mat[i][j]*otherMatrix.mat[j][k]);
                    }
            tempMat.mat[i][k] = sum;
            }
        }
    }
    else {
        cout<<"The dimensions do not match";
    }
    return tempMat;
}



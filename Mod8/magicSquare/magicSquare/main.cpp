//
//  main.cpp
//  magicSquare
//
//  Created by darst king on 7/8/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

int runSquare(int numRuns, int array[2][2]);
int checkSquare(int array[2][2]);


int main() {
    
    int arr[2][2];
    
    int runs = 1000000;
    int numMagic = 0;
    
    for (int i=0;i<=runs;i++){
    
        numMagic +=runSquare(runs,arr);
        
        cout<<"Run Number: "<<i<<" with "<<numMagic<<" squares so far"<<endl;
    }
    
    exit(0);
    return 0;
}



int runSquare(int numRuns, int array[2][2]){
    int magicNum = 0;
    
    
    for (int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            array[i][j] = rand()%9+1;
            
        }
    }
    magicNum = checkSquare(array);
        
    return magicNum;
    
}

int checkSquare(int array[2][2]){
    
    int magic = 0;
    int arraySum = 0;
    
    int columnSum_1 = 0;
    int columnSum_2 = 0;
    int columnSum_3 = 0;
    
    int rowSum1 = 0;
    int rowSum2 = 0;
    int rowSum3 = 0;
    
    int diagsumdown = 0;
    int diagsumup = 0;
    
    
    for(int i=0;i<=2;i++){
        for (int j=0;j<=2;j++){
            arraySum += array[i][j];
            if (j==0){
                columnSum_1 +=array[i][j];
                
            }
            if (j==1){
                columnSum_2 += array[i][j];
                
            }
            if (j==2){
                columnSum_3 +=array[i][j];
            }
            if (i==0){
                rowSum1 += array[i][j];
                
            }
            if (i==1){
                rowSum2 += array[i][j];
            }
            if (i==2){
                rowSum3 += array[i][j];
            }
            
            if (j==i){
                diagsumdown += array[i][j];
            }
            
            
            
            if ( 2-i == j){
                diagsumup += array[i][j];
                
            }

        }
    }
    arraySum = arraySum/3;
    

    if (arraySum == columnSum_1 && arraySum == columnSum_2 && arraySum == columnSum_3 && arraySum==rowSum1 && arraySum==rowSum2 && arraySum==rowSum3 && arraySum==diagsumdown  && arraySum == diagsumup ){
        
        magic = 1;
    }
    
    return magic;
    
}

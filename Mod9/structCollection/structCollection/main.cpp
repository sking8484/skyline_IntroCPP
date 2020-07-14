//
//  main.cpp
//  structCollection
//
//  Created by darst king on 7/13/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;

struct letter
{
    
    int upper;
    int lower;
    int total;
    
};


void openFile();
void count(char letterArray[]);
void printResults(letter letterList[],int i);
void initialize(letter letterList[],int total);

void readFile(ifstream& value);


int main() {
    openFile();
    
    
    
    return 0;
}


void openFile(){
    ifstream infile;
    string inputFile;

    cout<<"Enter the text file's name: ";
    cin >>inputFile;
    cout<<endl;
    
    infile.open(inputFile);
    
    if (!infile)
    {
        cout<<"Cannot open the input file."<<endl;
        
    }

    
    readFile(infile);
    infile.close();

    
}
void readFile(ifstream& file){
    letter letterList[10000];
    initialize(letterList,10000);
    
    char mychar;
    
    
    
    int i=0;
    while (!file.eof()){
        
        file.get(mychar);
        if (isupper(mychar)){
            letterList[i].upper+=1;
            letterList[i].total++;
        } else if (islower(mychar)){
            letterList[i].lower +=1;
            letterList[i].total++;
        }
        i++;
    }
    
    printResults(letterList,i);
}

void initialize(letter letterList[],int total){
    for (int i=0;i<=total;i++){
        letterList[i].lower = 0;
        letterList[i].upper = 0;
        letterList[i].total = 0;
    }
}



void printResults(letter letterList[],int total){
    
    int upper=0;
    int lower= 0;
    double aggregate = 0;
    
    for (int i=0;i<=total;i++){
        if (letterList[i].lower ==1){
            lower+=1;
            aggregate+=1;
        } else if (letterList[i].upper==1){
            upper+=1;
            aggregate+=1;
        }
    }
    
    cout<<upper<<" "<<lower<<" "<<aggregate;
    cout<<endl;
    cout<<"The percentage of upper is "<< 100*(upper/aggregate)<<"%"<<endl;
    
    cout<<"The percentage of lower is "<<100*(lower/aggregate)<<"%"<<endl;
    
    exit(0);
    
}

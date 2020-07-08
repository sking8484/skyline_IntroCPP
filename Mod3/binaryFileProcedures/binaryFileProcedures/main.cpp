//
//  main.cpp
//  binaryFileProcedures
//
//  Created by darst king on 6/21/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    streampos size;
    char* memblock;
    
    ifstream file ("example.bin",ios::in | ios::binary | ios::ate);
    if (file.is_open()){
        size = file.tellg();
        memblock = new char [size];
        file.seekg(0,ios::beg);
        file.read(memblock,size);
        file.close();
        
        cout<<" The entire file content is in memory";
        
        delete[] memblock;
    } else {
        cout << "We can not open the file";
    }
    
    return 0;
}

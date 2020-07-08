//
//  main.cpp
//  FileOperationsCPP
//
//  Created by darst king on 6/21/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
//include fstream
#include <fstream>
// open flags for open(file,openflag)
/*
 in - open for input opreations
 out - open for output operations
 binary - open in binary mode
 ate - ste the initial position at the end of the file. If this flag is not set, the initial position is the beginning of the file
 app - all output operations are performed at the end of the file, appending the content to the current content of the file
 trunc - if the file is opened for output operations and it already existed, it's previous content is deleted and replaced by new content
 
 
 These flags can be combined using bitwise operator -- myfile.open("example.bin", out|app|binary)
 
 
 DEFAULT modes
 
 ofstream - out
 ifstream - in
 fstream - in|out
 */


 /*
  *********************************
  State Flags
  *********************************
  
  bad() - returns true if a reading or writing operation fails.
  fail() - returns true in the same case as bad(), but also in the case that a format error happens
  eof() returns true if a file open for reading has reached the end
  good() - it is the ost generic state flag. It returns false in the same cases in whcih calling any of the previous functions would return true.
  
  */

/*
 ***************
 Teller, Getter
 ***************
 
 tellg(), tellp() - representing the current get position or put position
 */

/*
***************
SEEKG, SEEKP
***************

seekg(), seekp() - these functions allow to thcnage the location fo the get and put positions. Both functions are overloaded with two different prototypes.
 The paramaters is:
    seekg(position);
    seekp(position);
*/

using namespace std;
int main() {
    
    streampos begin,end;
    //Create a stream
    ofstream myStream ("test.txt"); // Combining construction
    // If file does not exist, the compiler will autopmatically create it
    // myStream.open("test.txt"); Don't need this due to the construction call
    
    if (myStream.is_open()){
        myStream << " This is a line. \n";
        myStream << " this is another line. \n";
        myStream << " This is a third line. \n";
        myStream.close();
    }
    string line;
    ifstream myfile("test.txt");
    
    if (myfile.is_open()){
        while (getline(myfile,line)){
            cout<<line<< endl;
            begin = myfile.tellg();
            cout<<begin<<endl;
        }
        myfile.close();
    } else {
        cout<<"Unable to open the file"<<endl;
    }
    
    
    
    
    
    return 0;
}

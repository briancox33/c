//Brian Cox
//3/10/2020
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
 ifstream inputFile;
 string name, front, back;
 
 //Open File
 inputFile.open("LineUp.txt");
 
 //Read File 
 if(inputFile)
 {
 	 inputFile >> name;
 
	 front = back = name;
	 
 	while(inputFile >> name)
  	{
  		if (name > back)
   	
    	back = name;
   	
   		if (name < front)
   	
     	front = name;
   }
   }
   	else
   	{
   		cout << "File did not open! Rerun program.";
   	}


 cout << front << " is at the front of the line." << endl;
 cout << back << " is at the back of the line." << endl;
 return 0;
}



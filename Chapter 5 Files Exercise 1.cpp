//Brian Cox
//3/10/2020
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
 int numOfStudents;
 string name, front, back;
 cout << "How many students are in the class?" << endl;
 cin >> numOfStudents;
 
 //Input Validation
 while((numOfStudents < 1) || (numOfStudents > 25))
  {
   cout << "Error! Please input a proper number of students: ";
   cin >> numOfStudents;
  }
  
 
  //Get the first name and automatically make it the front and back.
  cout << "Please enter the name of the first student: ";
  cin >> name;
  front = back = name;
 
 //Test to see if the values of the next names are higher or lower than the
 // one already submitted. This will determine who is in the front or back.
 for(int count = 2; count <= numOfStudents; count++)
 {
  cout << "Please enter the name of student # " << count << endl;
  cin >> name;
   if (name > back)
   {
    back = name;
   }
   else if (name < front)
   {
     front = name;
   }
 }
 cout << front << " is at the front of the line." << endl;
 cout << back << " is at the back of the line." << endl;
 return 0;
}





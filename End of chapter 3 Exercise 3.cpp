//Brian Cox
//2/11/2020
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{ 
string month1, month2, month3;
double month1num, month2num, month3num;
cout << "Welcome to the Average Rainfall application!" << endl << "What was the name of the first month that you are recording?" << endl;
cin >> month1;
cout << "What was the name of the second month that you are recording?" << endl;
cin >> month2;
cout << "What was the name of the third month that you are recording?" << endl;
cin >> month3;
cout << "Please enter the rainfall (in inches) that fell in the first month." << endl;
cin >> month1num;
cout << "Now please enter the inches of rainfall received in the second month." << endl;
cin >> month2num;
cout << "Lastly, please enter the inches of rainfall in the third month." << endl;
cin >> month3num;
double total = (month1num + month2num + month3num) / 3;
cout << "The average rainfall for " << month1 << ", " << month2 << ", " << ", and " << month3 << " is " << total << " inches." << endl;
}

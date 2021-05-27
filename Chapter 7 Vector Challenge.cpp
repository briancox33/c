//Brian Cox
//4/9/2020
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/* Function Prototypes */
void boysfunc(string, vector<string>);
void girlsfunc(string, vector<string>);
int main()
{
	vector<string> boysnames;
	vector<string> girlsnames;
	string boysname, girlsname;
	cout << "Enter a boy's name, or N if you do not want to enter a name: ";
	cin >> boysname;
	cout << "Enter a girl's name, or N if you do not want to enter a name: ";
	cin >> girlsname;
	//Call function as long as the user did not input N
	if (boysname != "N")
	{
	boysfunc(boysname, boysnames);
	}
	if (girlsname != "N")
	{
	girlsfunc(girlsname, girlsnames);
 	}
	if(boysname == "N")
	{
		cout << "You did not input a boy's name. " << endl;
	}
	else if(girlsname == "N")
	{
		cout << "You did not input a girl's name. " << endl;	
	}
 	return 0;
}
//Function for comparing the boy's names.
void boysfunc(string boysname, vector<string> boysnames)
{
	string name;		//New string for storing the names of the file.
	ifstream inputFile;
	inputFile.open("BoyNames.txt");
	int count = 0;
		while(inputFile >> name)		//While loop to input the file names into name, then into my vector.
	{
		boysnames.push_back(name);
			if (boysnames[count] == boysname)
			{
				inputFile.close();
				cout << "The name " << boysname << " is very popular among boys." << endl;				
			}
			count++;
		}
	}
// Function for comparing the girl's names	
void girlsfunc(string girlsname, vector<string> girlsnames)
{
	string name;		//New string for storing the names of the file.
	ifstream inputFile;
	inputFile.open("GirlNames.txt");
	int count = 0;
		while(inputFile >> name)		//While loop to input the file names into name, then into my vector.
		{
		
		girlsnames.push_back(name);
	
			if(girlsnames[count] == girlsname)
			{
				inputFile.close();
				cout << "The name " << girlsname << " is very popular among girls." << endl;
				}
						count++;
				
	}
}

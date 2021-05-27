//Brian Cox
//4/2/2020
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	//Declaring all of my variables before anything else.
	const int ARRAY_SIZE = 11;
	double numbers[11];
	double total = 0;
	double highest, lowest, average; // I put these as doubles to get a more precise answer for average.
	string filename;
	ifstream inputFile;
	int count = 0;  //loop counter
	cout << "Please input your file name: ";
	cin >> filename;
	
	//Open file
	inputFile.open(filename.c_str());
	
	// Make sure file opened.
	if (!inputFile)
	{
		cout << "File open failure!";
	}
	
	/* I will first make the first number of the file to be both the highest and the lowest number, so the rest of the numbers have something to compare to*/
	inputFile >> numbers[0];
	highest = numbers[0];
	lowest= numbers[0];
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
	{
		if (numbers[count] < lowest)
		{
			lowest = numbers[count];
		}
		else if (numbers[count] > highest)
		{
			highest = numbers[count];
		}
		count++;
	}
	
	//Getting our total and average. I will try to create a for loop to add the numbers together.
	for (int count_Total = 0; count_Total <= ARRAY_SIZE; count_Total++)
	{
		total += numbers[count_Total];
	}
	
	average = total / 12;
	inputFile.close();
	/*Finally, we will display the average, total, highest, and lowest numbers*/
	cout << "For " << filename << ", the highest number was " << highest << ".\n" << "The lowest number was " << lowest << endl;
	cout << "The total of all the numbers was: " << total << endl;
	cout << "The average for all of the numbers was: " << average;
	
	return 0;
	
}

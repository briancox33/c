//Brian Cox
//3/10/2020
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	ifstream randomFile;
	double average, total = 0, sum = 0, count;
	
	randomFile.open("Random.txt");
	
	if(randomFile)
	{
		randomFile >> count;
		sum += count;
		total++;
		while(randomFile >> count)
		{
		sum += count;
		total++;
		}
	}
	else
	{
	cout << "ERROR. File did not open. Please rerun program.";
	return 0;
	}
	average = sum / total;
	cout << "Number of numbers: " << total << endl;
	cout << "Sum of numbers: " << sum << endl;
	cout << "Average of the numbers: " << average << endl;
	return 0;
}

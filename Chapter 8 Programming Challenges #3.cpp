//Brian Cox
//4/2/2020
#include <iostream>
using namespace std;
void bubbleSort(double[], const int);
void swap(double&, double&);
int main()
{
	/*First, I have to declare my variables and array that I will be using.*/
	const int ARRAY_SIZE = 11;
	double months[ARRAY_SIZE];
	int month = 1;
	for(int count = 0; count <= 11; count++)
	{
		cout << "Please enter the rainfall for month #" << count + 1 << ": ";
		cin >> months[count];
	}
	bubbleSort(months, ARRAY_SIZE);	
	return 0;
}
void bubbleSort(double months[], const int ARRAY_SIZE)
{
//Declaring new variables to perform the search.
	int maxElement;
	int index;
	int month = 1;
	/* For loop to begin sorting*/
	for(maxElement = 12 - 1; maxElement > 0; maxElement--)
	{
		for(index = 0; index < maxElement; index++)
		{
			if(months[index] < months[index + 1])
			{
			swap(months[index], months[index + 1]);
			}
		}
	}
	// Time to display the rainfall for every month.
	for(int count = 0; count <= ARRAY_SIZE; count++)
	{		
	cout << "Month " << month << ": " << months[count] << endl;
	month++;
	}
}
void swap(double &a, double &b)
{
//Creating hold int to swap values
int hold = a;
a = b;
b = hold;
}

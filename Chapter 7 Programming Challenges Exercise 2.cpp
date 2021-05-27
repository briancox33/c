//Brian Cox
//4/2/2020
#include <iostream>
using namespace std;
int main()
{
	/*First, I have to declare my variables and array that I will be using.*/
	const int ARRAY_SIZE = 11;
	double months[ARRAY_SIZE];
	double total, highest, lowest, average;
	int highestmonth, lowestmonth;
	int month = 1;

	cout << "Please enter the amount of rainfall, in inches, for month #1: ";
	cin >> months[0];
	
	/*While loop to make sure the input is not negative*/
	while (months[0] < 0)
	{
	cout << "ERROR, please enter a valid amount of rainfall. ";
	cin >> months[0];
	}
	
	/* Set the first user input to both highest and lowest, that way the other inpouts have something to be compared to.*/
	highest = months[0];
	lowest = months[0];
	highestmonth = month;
	lowestmonth = month;
	month++;
	/* For loop to store each month's rainfall in array months, as well as test to see which is the highest and lowest rainfall*/
	for (int count = 1; count <= ARRAY_SIZE; count++)
	{
		cout << "What was the amount of rainfall, in inches, for month #" << month << "? ";
		cin >> months[count];
			/*Another while loop to make sure the input is not negative.*/
			while (months[count] < 0)
			{
			cout << "ERROR, please enter a valid amount of rainfall. ";
			cin >> months[count];
			}
			/*If statement to check if the rainfall entered is greater the highest input so far or less than the lowest input so far.*/
			if (months[count] > highest)
			{
				highest = months[count];
				highestmonth = month;
			}
			else if (months[count] < lowest)
			{
				lowest = months[count];
				lowestmonth = month;
			}
			month++;		
	}
	/* Now, let's get our totals and averages. I will be attempting to use a for loop to add the numbers in my array together and get my total.*/
	for (int counttotal = 0; counttotal <= ARRAY_SIZE; counttotal++)
	{
		total += months[counttotal];
	}
	
	average = total / 12;
	
	/* Time to display our, total, average, and highest and lowest amount of rainfall*/
	cout << "For the 12 months of rainfall, the highest amount of rainfall was month #" << highestmonth
	<< " with " << highest << " inches of rain." << endl << "The least amount of rainfall was month #"
	<<  lowestmonth << " with " << lowest << " inches of rain." << endl;
	cout << "Average amount of rain per month: " << average << " inches of rain." << endl;
	cout << "Total amount of rainfall for the past 12 months: " << total << " inches of rain." << endl;
	return 0;	
}

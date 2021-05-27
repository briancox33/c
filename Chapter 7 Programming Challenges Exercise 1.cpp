//Brian Cox
//4/2/2020
#include <iostream>
using namespace std;
int main()
{
	//Declare array numbers to have 10 subscripts.
	int numbers[9];
	int first, last;
	const int ARRAY_SIZE = 9;
	cout << "Please enter your first value. ";
	
	/*Declare the first integer to be the greatest and the least, that way each of the other integers of
	 array numbers have something to be compared to.*/
	cin >> numbers[0];
	first = numbers[0];
	last = numbers[0];
	
	/*For loop to test to see if each int is greater or less than that first number stored.*/
	for (int count = 1; count <= ARRAY_SIZE; count++)
	{
		cout << "Please enter a value. ";
		cin >> numbers[count];
	
		/*If statement to check if the integer entered into numbers is greater than the ones already stored 
		in first or last integers.*/
			if (numbers[count] < last)
			{
				last = numbers[count];
			}
			else if (numbers[count] > first)
			{
				first = numbers[count];
			}
	}
	
	/*Finally, we will display the largest and smallest integers that were entered.*/
	cout << "The largest number you entered is " << first << " and the smallest number you entered is "
	<< last << endl;
	return 0;
	
}

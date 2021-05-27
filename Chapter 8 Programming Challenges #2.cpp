//Brian Cox
//4/16/2020
#include <iostream>
using namespace std;
//binarySearch is my function for my binary search.
void binarySearch(int[]);
int main()
{
	//Declare array with ticket numbers.
	int winners[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	binarySearch(winners);
	return 0;
}
void binarySearch(int winners[])
{
	//They will search for the winning ticket through int ticket.
	int first = 0;
	int last = 9;
	int middle;
	int position = -1;
	int ticket;
	bool winner = false;
	cout << "What was the winning ticket this week? ";
	cin >> ticket;
	//While loop to conduct the binary search
	while(!winner && first <= last)
	{
		middle = (first + last) / 2; //Find mid point of array.
		if(winners[middle] == ticket) //Test to see if midpoint is the correct value.
		{
			winner = true;
			position = middle;
			cout << "The ticket " << winners[position] << " is a winner! You won!"; 
			return;
		}
		else if(winners[middle] > ticket)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}
	cout << "You did not have the winning ticket.";
	return; 
}

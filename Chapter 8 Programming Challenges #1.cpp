//Brian Cox
//4/16/2020
#include <iostream>
using namespace std;
//linearSearch is my function for my linear search.
void linearSearch(int[]);
int main()
{
	//Declare array with ticket numbers.
	int winners[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	linearSearch(winners);
	return 0;
}
void linearSearch(int winners[])
{
	//They will search for the winning ticket through int ticket.
	int ticket;
	int index = 0;
	int position = -1;
	bool winner = false;
	cout << "What was the winning ticket this week? ";
	cin >> ticket;
	//While loop to conduct the linear search
	while(index < 10 && !winner)
	{
		if(winners[index] == ticket)
		{
			winner = true;
			position = index;
			cout << "The ticket " << winners[position] << " is a winner! You won!";
			return;
		}
		index++;
	}
	cout << "The ticket " << ticket << " was not one of the tickets you had. You lose.";
	return; 
}

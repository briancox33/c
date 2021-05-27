//Brian Cox
//2/17/2020
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int books;
	// Gather information on the books integer.
	cout << "How many books did you purchase this month?" << endl;
	cin >> books;
	// Switch statement for books.
	switch (books)
	{
		case 0: cout << "You have earned 0 points.";
		break;
		case 1: cout << "You have earned 5 points.";
		break;
		case 2: cout << "You have earned 15 points.";
		break;
		case 3: cout << "You have earned 30 points.";
		break;
		case 4: cout << "You have earned 60 points.";
		break;
	}
	// I am not sure how to do a switch statement for something like >= 4. So I did an if statement.
	if (books > 4)
	{
		cout << "You have earned 60 points.";
	}
	return 0;
}

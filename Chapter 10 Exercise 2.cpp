//Brian Cox
//5/4/2020
#include <cstring>
#include <iostream>
using namespace std;
// prototype of my backwards function
void backwards(char *);
int main()
{
	// So I made my array of char's only 20 because I could not figure out how to make it allocate memory without something already declared.
	char name[20];
	cout << "Input a string of no more than 20 characters and I will display it backwards: ";
	cin.getline(name, 20);	
	cout << "You inputted: ";
	for(int count = 0; count <=strlen(name)-1; count++)
	{
		cout << name[count];
	}
	cout << endl;
	backwards(name);
	return 0;
}
// backwards definition
void backwards(char *ptr)
{
	cout << "Backwards: ";
	// Loop to display my input backwards
	for(int count = strlen(ptr)-1; count>=0; count--)
	{
		cout << ptr[count];
	}
}

//Brian Cox
//Coding exercises edabit
#include <iostream>
using namespace std;
int main(){
	int num, next;
	int total = 0;
	cout << "How many integers would you like to input? \n";
	cin >> num;
	int absvalue[num] = { };
	for(int index = 0; index < num; index++){
		cout << "Enter your next integer: ";
		cin >> next;
		absvalue[index] = next;
	}
	cout << absvalue[0];
	for(int i = 0; i < sizeof(absvalue)/sizeof(absvalue[0]); i++){
		if(absvalue[i] < 0){
			absvalue[i] = absvalue[i] * -1;
		}
	}
	for(int x = 0; x < sizeof(absvalue)/sizeof(absvalue[0]); x++){
		total = total + absvalue[x];
	}
	cout << "The total of the absolute values of integers inputted are: " << total;
	return 0;
}

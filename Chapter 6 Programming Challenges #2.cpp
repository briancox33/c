//Brian Cox
//3/10/2020
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int inPatient(int);
int outPatient(int);
void displayData(int);
int main()
{
	char patient;
	int total;
	ofstream outputFile;
	cout << "What is the patient type?" << endl << "Inpatient or OutPatient? (I or O) ";
	cin >> patient;
	while((patient != 'I') && (patient != 'O'))
	{
		cout << "Error, please input I or O";
		cin >> patient;
	}
	if(patient == 'I')
	{
		total = inPatient(total);
	}
	else if(patient == 'O')
	{
		total = outPatient(total);
	}

	displayData(total);
	return 0;
}

int inPatient(int total)
{
	ofstream outputFile;
	outputFile.open("HospitalReport.txt");
	int days, rate, meds, services, dailyRate;
	cout << "How many days did you spent in the hospital? ";
	cin >> days;
	while(days < 1)
	{
		cout << "Error, please input a valid number of days.";
		cin >> days; 
	}
	cout << "What was the daily rate? ";
	cin >> rate;
	cout << "What were the medication charges? ";
	cin >> meds;
	cout << "How much were you charged for hospital services? ";
	cin >> services;
	dailyRate = rate * days;
	total = dailyRate + meds + services;
	outputFile << "$" << total;
	return total;
}
int outPatient(int total)
{
	ofstream outputFile;
	outputFile.open("HospitalReport.txt");
	int services, meds;
	cout << "How much were you charged for hospital services? ";
	cin >> services;
	cout << "What were the medication charges? ";
	cin >> meds;
	total = meds + services;
	outputFile << "$" << total;
	return total;
}

void displayData(int total)
{
	cout << "Your total charges are $" << total << endl;
	cout << "Charges were printed to HospitalReport.txt.";
	return;
}

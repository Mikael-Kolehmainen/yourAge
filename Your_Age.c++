#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int number = 0;
	int sleep = 0;
	int days = 365;
	int hours = 8760;
	int minutes = 525600;
	long long int seconds = 315360000;
	cout << "This program will show you your age in different formats." << endl;
	cout << "What is your age?" << endl;
		cin >> number;
		seconds = seconds * number;
		minutes = minutes * number;
		hours = hours * number;
		days = days * number;	
	cout << "Your age in days: " << days << endl;
	cout << "Your age in hours: " << hours << endl;
	cout << "Your age in minutes: " << minutes << endl;
	cout << "Your age in seconds: " << seconds << endl;
	cout << " " << endl;
		cout << "Okay, please tell me how many hours you sleep per day." << endl;
		cout << " " << endl;
			cout << "Sleep: " << endl;
			cin >> sleep;
			sleep = sleep * days;
		cout << " " << endl;
		cout << "You have slept " << sleep << " hours in total of " << number << " years." << endl;
	}


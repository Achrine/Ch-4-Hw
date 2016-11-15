//Programmer: Steven Brcak
//Assignment: Program Challenge
//			  Chapter 4, Number 7
//Filename: CH04_07.cpp
//Creation Date: 11/15/16
//Assignment: Time Calculator
//Description:  
/*
Write a program that asks the user to enter a number of seconds.

There are 60 seconds in a minute. If the number of seconds entered by the user is
greater than or equal to 60, the program should display the number of minutes in
that many seconds.

There are 3,600 seconds in an hour. If the number of seconds entered by the user
is greater than or equal to 3,600, the program should display the number of hours
in that many seconds.

There are 86,400 seconds in a day. If the number of seconds entered by the user is
greater than or equal to 86,400, the program should display the number of days
in that many seconds.
*/

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration Statements 
	double seconds, minutes, hours, days;


	//input-output statements
	cout << "Input seconds: ";
	cin >> seconds;
	cout << endl; 

	//Calculation
	minutes = seconds / 60, hours = minutes / 60, days = hours / 24;
	// cout << "seconds: " << seconds << endl; <= used for testing 
	//Overview Statement
	if (seconds >= 86400) {
		cout << "That is equal to: " << days << " days" << endl;
	}
	else if (seconds >= 3600) {
		cout << "That is equal to: " << hours << " hours" << endl;
	}
	else if (seconds >= 60) {
		cout << "That is equal to: " << minutes << " minutes" << endl;
	}
	else {
		cout << "That is " << seconds << " seconds" << endl;
	}

	//Perfom Calculation 

	//Output of Results to the screen. 


	return 0;





}
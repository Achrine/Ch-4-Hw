//Programmer: Steven Brcak
//Assignment: Program Challenge
//			  Chapter 4, Number 3
//Filename: CH04_03.cpp
//Creation Date: Enter Creation Date Here
//Assignment: MAGIC NAME 
//Description: The date June 10, 1960 is special because when we write it in the following format,
//the month times the day equals the year.
//6 / 10 / 60
//Write a program that asks the user to enter a month(in numeric form), a day, and a
//two - digit year.The program should then determine whether the month times the day
//is equal to the year.If so, it should display a message saying the date is magic.Otherwise
//it should display a message saying the date is not magic.

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	int month, day, year, month_day_to_year;

	//Overview Statement

	//Input --Prompt and Response Method 
	cout << "Input Day 00: " << endl;
	cin >> day;
	cout << "Input Month 00: " << endl;
	cin >> month;
	cout << "Input Year 00: " << endl; 
	cin >> year; 
	
	month_day_to_year = month * day;
	//if statements. 
	if (month_day_to_year == year) {
		cout << "The day is magic" << endl;
	}
	else {
		cout << "The day is not magic" << endl;
	}

	


	return 0;





}
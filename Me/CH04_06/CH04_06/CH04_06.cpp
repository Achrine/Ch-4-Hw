//Programmer: Steven Brcak 
//Assignment: Program Challenge
//			  Chapter 4, Number 6
//Filename: CH04_06.cpp
//Creation Date: 11/15/16
//Assignment: Mass and Weight
//Description:
/*
Scientists measure an object's mass in kilograms and its weight in newtons. If you
know the amount of mass that an object has, you can calculate its weight, in newtons,
with the following formula:
Weight = mass × 9.8

Write a program that asks the user to enter an object's mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a
message indicating that the object is too light.
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
	double mass, weight;

	//Overview Statement

	//Input --Prompt and Response Method 
	cout << "Input an objects mass: "; //input
	cin >> mass; 
	cout << endl;

	//Perfom Calculation 
	weight = mass * 9.8;
	// cout << weight << endl; <- for bug testing 
	//If-loop
	if (weight >= 1000)
		cout << "The object is too heavy" << endl;

	else if (weight <= 10) 
		cout << "The object is too light" << endl;
	
	else 
		cout << "The object weighs: " << weight << endl;
	
	return 0;





}
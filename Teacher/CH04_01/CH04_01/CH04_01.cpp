//Programmer: Your Name Here 
//Assignment: Program Challenge
//			  Chapter 4, Number 1
//Filename: CH04_01.cpp
//Creation Date: Enter Creation Date Here
//Description: Write a proram that asksthe user to enter two numbers. 
//The program should use conditional operator to determine which number is the smaller and which is the larger. 

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std; 

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	int num01,
		num02,
		min,
		max;

	//Overview Statement
	cout << "This program will compare two numbers entered by the user, \n";
	cout << "compare them and show which is smaller, and which is greater.\n\n";
	//Input --Prompt and Response Method 
	cout << "Enter your 1st number (Please no decimals or fractions): ";
	cin >> num01;
	cout << "Enter your 2nd number (Please no decimals or fractions): ";
	cin >> num02;
	//Perfom Calculation 
	//Research the next statemetn and be able to explain it to your instructor. 
	//Locate the page(s) in Chapter 4 that explain this and study the topic. 
	min = num01 < num02 ? num01 : num02;
	max = num01 > num02 ? num01 : num02;
	//Output of Results to the screen. 
	cout << "The smaller number is " << min << endl;
	cout << "The greater number is " << max << endl; 

	return 0;
}
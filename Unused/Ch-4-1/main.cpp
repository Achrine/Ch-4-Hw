// Author: Steven Brcak
// Date: 10/27/16
// Filename: main.cpp// Problem: Ch 4 Question 1. 
// Write a program 
/*

Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.

*/


#include <iostream> //preprocessor directive 

using namespace std; // I'm only using the standard library, so this is ok.


int main(){
 //the almighty main	double number1 = 0, number2 = 0;
 // variable declaration
	cout << "input the first number: "; 
 //input the first number	cin >> number1; 
 //take in the first number 	cout << "input the second number: "; 
 //input the second number	cin >> number2; 
 //take in the second number 
	if (number1 < number2) {
 // if number1 is less than number2, do this.		cout << "\nnumber1 is min, number2 is max\n";
	}
	else {
 // for everything else, which is if number1 is greater than number 2.		cout << "\nnumber1 is max, number2 is min\n";
	}

	return 0; 
 //our main is an int type, and so wants an int in return. }




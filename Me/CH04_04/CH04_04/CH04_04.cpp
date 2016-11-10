//Programmer: Steven Brcak
//Assignment: Program Challenge
//			  Chapter 4, Number 4
//Filename: CH04_04.cpp
//Creation Date: 11/10/15
//Assignment: Area of Rectangles.
//Description: 
//The area of a rectangle is the rectangle's length times its width. Write a program that
//asks for the length and width of two rectangles.The program should tell the user
//which rectangle has the greater area, or if the areas are the same.

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	int width1, length1,
		width2, length2,
		area1, area2;

	

	cout << "What is the width of rectangle 1: "; //prompt
	cin >> width1; //input
	cout << "What is the height of rectangle 1: "; //prompt
	cin >> length1; //input
	cout << endl;

	cout << "What is the width of rectangle 2: "; //prompt
	cin >> width2; //input
	cout << "What is the height of rectangle 2: "; //prompt
	cin >> length2; //input
	cout << endl;

	area1 = width1 * length1; //calculations
	area2 = width2 * length2;

	cout << "The area of Rectangle 1: " << area1 << endl; //display area for user comparison 
	cout << "The area of Rectangle 2: " << area2 << endl << endl;
	//If statements.
	if (area1 < area2) {
		cout << "The second rectangle is larger." << endl;
	}
	else {
		cout << "The first rectangle is larger." << endl;
	}
	
	return 0;

}
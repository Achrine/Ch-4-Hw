//Programmer: Your Name Here 
//Assignment: Program Challenge
//			  Chapter 4, Number 2
//Filename: CH04_02.cpp
//Creation Date: Enter Creation Date Here
//Assignment: Chapter 4 Prgm Challenge 2, Roman Numeral Converter
//Description: the purpose of this program is to convert a number (1-10) to a Roman Numeral equivalent


//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	int num;

	//Input --Prompt and Response Method 
	cout << "Enter a number in the range of 1-10: ";
	cin >> num;
	//Processing and Output
	//Input Validation - check number is valid and select numeral to display 
	if (num < 1 || num > 10)
		cout << "That number is not valid. \n";
	else {
		cout << "The Roman numeral for " << num << " is ";
		switch (num)
		{
		case 1: cout << "I\n"; 
			break;
		case 2: cout << "II\n";
			break;
		case 3: cout << "III\n";
			break;
		case 4: cout << "IV\n";
			break;
		case 5: cout << "V\n";
			break;
		case 6: cout << "VI\n";
			break;
		case 7: cout << "VII\n";
			break;
		case 8: cout << "VIII\n";
			break;
		case 9: cout << "IX\n";
			break;
		case 10: cout << "X\n";
			break;
		}
	}

	return 0;

}
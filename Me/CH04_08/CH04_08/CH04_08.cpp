//Programmer: Steven Brak
//Assignment: Program Challenge
//			  Chapter 4, Number 8
//Filename: CH04_08.cpp
//Creation Date: 11/17/16
//Assignment: Change for a Dollar Game
//Description:  
/*
Create a change-counting game that gets the user to enter the number of coins
required to make exactly one dollar. The program should ask the user to enter the
number of pennies, nickels, dimes, and quarters. If the total value of the coins entered
is equal to one dollar, the program should congratulate the user for winning the game.
Otherwise, the program should display a message indicating whether the amount
entered was more than or less than one dollar.
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
	int numPennies, numNickels, numDimes, numQuarters;
	double valPennies = 0.01, valNickels = 0.05, valDimes = 0.10, valQuarters = 0.25, valDollar = 1.00;

	
	//Overview Statement
	cout << "Enter the number of coints required to make exactly one dollar.\n";
	//Input --Prompt and Response Method 
	cout << "How many pennies do you have: ";
	cin >> numPennies;

	cout << "How many nickel do you have: ";
	cin >> numNickels;

	cout << "How many dimes you do have: ";
	cin >> numDimes;

	cout << "How many quarters do you have: ";
	cin >> numQuarters;
	//Perfom Calculation 
	double numTotal = numDimes + numNickels + numPennies + numQuarters, //This is so we know the total number of coins put in
		valTotal = (valPennies * numPennies) + (valNickels * numNickels) + (valDimes * numDimes) + (valQuarters * numQuarters); //the actual value of the money put in
	//If Loop
	if (valDollar > valTotal) {
		cout << "The total you inputed is " << valTotal << " which is less than a dollar";
	}
	else if (valDollar < valTotal) {
		cout << "The total you inputed is " << valTotal << " which is greater than a dollar";
	}
	else {
		cout << "Tho total you inputed is equal to a dollar.\n";
	}


	return 0;





}
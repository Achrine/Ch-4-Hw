//Programmer: Your Name Here 
//Assignment: Program Challenge
//			  Chapter 4, Number 9
//Filename: CH04_00.cpp
//Creation Date: Enter Creation Date Here
//Assignment: Math Tutor.
//Description: Math Tutor

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
#include <cstdlib> //For rand and srand
#include <ctime> //For the time function
#include <iomanip> 

using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration Statements 
	//Constants
	const int MIN = 50;
	const int MAX = 450;

	//Get the system time. 
	unsigned seed = time(0);

	//Seed the random number generator. 
	srand(seed);

	// Generate two random numbers. 
	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;
	int answer;

	//Display the addition problem. 
	cout << setw(5) << num1 << endl
		<< "+" << setw(4) << num2 << endl
		<< "-----\n\n";

	//Wait for the user to press the Enter key
	cout << "Enter the answer here: ";
	cin >> answer; 

	//Calculate the sum. 
	int correctAnswer = num1 + num2;

		//Display the answer to the addition problem. 
		cout << (answer == correctAnswer ? "\nCongratulations!\n" : "\nSorry that is incorrect. \n") << "The answer is " << correctAnswer << endl << endl;

	return 0;





}
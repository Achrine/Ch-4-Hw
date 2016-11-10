//Programmer: Steven Brcak
//Assignment: Program Challenge
//			  Chapter 4, Number 5
//Filename: CH04_05.cpp
//Creation Date: 11/10/16
//Assignment: Body Mass Index.
//Description: 
/*

Write a program that calculates and displays a person's body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is overweight
or underweight for his or her height. A person's BMI is calculated with the following
formula:
BMI = weight × 703 / height2

where weight is measured in pounds and height is measured in inches. The program
should display a message indicating whether the person has optimal weight, is underweight,
or is overweight. A sedentary person s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.

*/

//Preprocessor Dinective
//This line of code causes the contents of another file to be 
//Inserted into the program. 
#include <iostream>
using namespace std;

//This line of code begins a function (module) called main. 
//All C++ programs begin  with this line of code. 

int main() {
	//Variable Declaration STatements 
	double BMI, height, weight;
	

	

	//Overview Statement

	//Input --Prompt and Response Method 
	cout << "What is your height in inches: "; //prompt
	cin >> height; //input

	cout << "What is your weight in pounds: "; //prompt
	cin >> weight; //input

	//Perfom Calculation 
	
	BMI = weight * ( 703.0 / (height * height)); // calculating the Body Mass Index 
	cout << "Your BMI is: " << BMI << endl;

	//Loop 

	if (BMI <= 18.5) { //if we're under this range
		cout << "You are underweight." << endl; 
	}
	else if (BMI >= 25) { //being over is unhealthy/overweight
		cout << "You are overweight." << endl;
	}
	else //equates to ((18.5 <= BMI) && (BMI >= 25)) 
	{
		cout << "You are healthy." << endl;
	} 
	
	return 0;





}
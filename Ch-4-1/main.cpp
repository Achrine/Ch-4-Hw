#include <iostream>

using namespace std;


int main(){
	double number1 = 0, number2 = 0;

	cout << "input the first number: "; 
	cin >> number1; 
	cout << "input the second number: "; 
	cin >> number2; 

	if (number1 < number2) {
		cout << "\nnumber1 is min, number2 is max\n";
	}
	else {
		cout << "\nnumber1 is max, number2 is min\n";
	}

	return 0; 
}



#include <iostream>

using namespace std;

int main() {


	int x;
	cout << "choose a number between 1 and ten";
	cin >> x;
	if (x >= 0 && x <= 10) {
		switch (x) {
		case 1: cout << "I"; break; // we use break here, because, otherwise, the whole list would print 
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
		case 10: cout << "X"; break;
		}
	}
	else {
		cout << "invalid declaration" << endl; 
	}
	return 0; 
}
#include <iostream>
using namespace std;

int main() {
	int FValue;
	
	cout << "Please enter a Fahrenheit value: ";
	cin >> FValue;
	
	cout << "The Celsius value is: " << (FValue - 32) * 5/9 << ".\n";
	
	return 0;
}
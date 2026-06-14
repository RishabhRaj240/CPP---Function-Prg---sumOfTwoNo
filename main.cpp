#include<iostream>
using namespace std;
// Functions are set of code which performs something
// Function are used to modularise code
// Function are used to increase readability
// Function are used to use similar code multiple times
// void -> which does not returns anything
// return 
// parameterised
// non parameterised

void sum(int num1, int num2) {
	int num3 = num1 + num2;
	cout << endl << num3;
}

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	sum(num1, num2);
	return 0;
}
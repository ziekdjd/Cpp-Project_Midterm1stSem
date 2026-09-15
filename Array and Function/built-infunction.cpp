#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	double num1 = 9.0;
	double num2 = 2.0;
	double negativeNum = -12.34;

	cout << "Square root of 9: " << sqrt(num1) << "\n";
	cout << "9 raised to power 2: " << pow(num1, num2) << "\n";

	cout << "Absolute value of -12.34: " << abs(negativeNum) << "\n";
	cout << "Ceil of 4.1: " << ceil(4.1) << "\n";

	cout << "Max of 15 and 42: " << max(15, 42) << "\n";
	cout << "Min of 15 and 42: " << min(15, 42) << "\n";

	return 0;
}

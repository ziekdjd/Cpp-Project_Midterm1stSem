#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

int main() {
	cout << "Int Add: " << add(5, 10) << "\n";
	cout << "Double Add: " << add(2.5, 4.3) << "\n";

	return 0;
}

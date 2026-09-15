#include <iostream>
#include <string>
using namespace std;

template <typename T>
T getMax(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	cout << "Max Int: " << getMax(10, 20) << "\n";
	cout << "Max double: " << getMax(3.5, 7.5) << "\n";
	cout << "Max Char: " << getMax('a', 'z') << "\n";

	return 0;
}

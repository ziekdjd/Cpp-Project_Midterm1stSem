#include <iostream>
#include <string>
using namespace std;

inline int cube(int s) {
	return s * s * s;
}

int main() {
	cout << "Cube of 3: " << cube(3) << "\n";
	return 0;
}

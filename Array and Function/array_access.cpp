#include <iostream>
using namespace std;

int main() {
	int grades[5] = { 85,90,78,92,88 };

	cout << "First grade: " << grades[0] << endl;
	cout << "Last grade: " << grades[4] << endl;

	grades[2] = 100;
	cout << "Updated 3rd grade: " << grades[2] << endl;

	return 0;
}

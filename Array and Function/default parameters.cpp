#include <iostream>
#include <string>
using namespace std;

void displayMessage(string msg = "Default Notice", int repeats = 1)
{
	for (int i = 0; i < repeats; ++i)
	{
		cout << msg << "\n";
	}
}

int main() {
	displayMessage();
	displayMessage("Warning!", 2);
	return 0;
}

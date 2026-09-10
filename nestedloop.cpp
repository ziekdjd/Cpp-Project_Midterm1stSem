#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1 Number Triangle" << endl;
    cout << "2 Find the Perfect Score" << endl;
    cout << "3 Odd Sum, Skip Multiples of 3" << endl;
    cout << "Choose a Program:";
    cin >> choice;

    if (choice == 1) {
        system("cls");

        int n = 5;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
        system("pause");
        system("cls");
        return main();
    }
    else if (choice == 2) {
        system("cls");

        int score;
        int highest = 0;

        cout << "Enter scores (-1 to stop): ";

        while (true) {
            cin >> score;

            if (score == -1) {
                break; // sentinel value
            }

            if (score > highest) {
                highest = score;
            }
        }

        cout << "Perfect score: " << highest << endl;
        system("pause");
        system("cls");
        return main();

    }
    else if (choice == 3) {
        system("cls");

        int n, sum = 0;

        cout << "Enter n: ";
        cin >> n;

        cout << "Numbers used: ";

        for (int i = 1; i <= n; i++) {
            // Skip multiples of 3
            if (i % 3 == 0)
                continue;

            // Use only odd numbers
            if (i % 2 != 0) {
                sum += i;
                cout << i << " ";
            }
        }

        cout << "\nSum = " << sum << endl;

        cout << "Numbers skipped (multiples of 3): ";
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0)
                cout << i << " ";
        }

        cout << endl;

        system("pause");
        system("cls");
        return main();
    }
 
    return 0;
}

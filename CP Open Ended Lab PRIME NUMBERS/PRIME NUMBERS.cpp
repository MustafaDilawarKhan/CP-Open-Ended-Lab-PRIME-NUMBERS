#include <iostream>
using namespace std;

int main() {
    int choice;
    bool isPrime;

    cout << "Choose an option:\n";
    cout << "1. Find prime numbers in a given range\n";
    cout << "2. Check if a number is prime\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1) {
        int range1, range2;

        cout << "Enter the range.\n";
        cout << "From: ";
        cin >> range1;
        cout << "To: ";
        cin >> range2;

        cout << "Prime numbers in the range from  " << range1 << " to " << range2 << " are: ";
        for (int i = range1; i <= range2; i++) {
            if (i < 2)
                continue;

            isPrime = true;
            for (int j = 2; j * j <= i && isPrime; j++) {
                if (i % j == 0)
                    isPrime = false;
            }
            if (isPrime)
                cout << i << " ";
        }
        cout << endl;

    }
    else if (choice == 2) {
        int num;

        cout << "Enter a number: ";
        cin >> num;

        isPrime = true;
        if (num <= 1)
            isPrime = false;
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    
                }
            }
        }

        if (isPrime)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }
    else {
        cout << "Invalid Choice." << endl;
    }

    return 0;
}

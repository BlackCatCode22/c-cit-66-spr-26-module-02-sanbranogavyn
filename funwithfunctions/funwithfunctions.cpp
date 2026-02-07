#include <iostream>
using namespace std;

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

// Function to compare two integers
void compareTwoInts(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << b << " is greater than " << a << endl;
    } else {
        cout << "Both numbers are equal" << endl;
    }
}

// Function to sum two integers
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    int num1;
    int num2;
    int sum;

    num1 = getAnIntFromTheUser();
    num2 = getAnIntFromTheUser();

    compareTwoInts(num1, num2);

    sum = sumTwoInts(num1, num2);
    cout << "The sum is: " << sum << endl;

    return 0;
}
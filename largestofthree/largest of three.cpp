#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter third integer: ";
    cin >> num3;

    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;
}
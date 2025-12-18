#include <iostream>
#include <cmath>
using namespace std;

void add(double a, double b) {
    cout << "Result = " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result = " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result = " << a * b << endl;
}

void divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero not allowed!\n";
        return;
    }
    cout << "Result = " << a / b << endl;
}

void power(double a, double b) {
    cout << "Result = " << pow(a, b) << endl;
}

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n====== CALCULATOR MENU ======";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Power (x^y)";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        case 5:
            power(num1, num2);
            break;
        case 6:
            cout << "\nExiting Calculator...\n";
            break;
        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}

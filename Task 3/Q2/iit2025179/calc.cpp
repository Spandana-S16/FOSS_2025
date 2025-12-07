#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << a + b;
    }
    else if (op == '-') {
        cout << "Result: " << a - b;
    }
    else if (op == '*') {
        cout << "Result: " << a * b;
    }
    else if (op == '/') {
        if (b == 0) {
            cout << "Error: division by zero";
        } else {
            cout << "Result: " << a / b;
        }
    }
    else {
        cout << "Invalid operation";
    }

    return 0;
}


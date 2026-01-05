#include <iostream>
using namespace std;

int main() {
    int x, y;
    char op;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << x + y << endl;
            break;
        case '-':
            cout << "Result: " << x - y << endl;
            break;
        case '*':
            cout << "Result: " << x * y << endl;
            break;
        case '/':
            if (y != 0)
                cout << "Result: " << x / y << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

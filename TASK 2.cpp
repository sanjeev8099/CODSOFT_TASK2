#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;
    char again;

    do {
        cout << "\n=== SIMPLE CALCULATOR ===\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter operation (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> b;

        switch (op) {
            case '+':
                result = a + b;
                cout << "Result = " << result << '\n';
                break;
            case '-':
                result = a - b;
                cout << "Result = " << result << '\n';
                break;
            case '*':
                result = a * b;
                cout << "Result = " << result << '\n';
                break;
            case '/':
                if (b == 0)
                    cout << "Error: Division by zero is not allowed.\n";
                else
                    cout << "Result = " << a / b << '\n';
                break;
            default:
                cout << "Invalid operation.\n";
        }

        cout << "Calculate again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}
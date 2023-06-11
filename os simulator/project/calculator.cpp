#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <limits>
#include <unistd.h>

using namespace std;

int main() {
    double num1, num2, result;
    char op;
	cout<<"Hello World\n";
    while (true) {
        // Display the prompt and get user input
        cout << "Enter an operation (+, -, *, /, ^, %): ";
        cin >> op;

        if (op == 'q') {
            break;
        }

        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '^' || op == '%') {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            // Perform the requested operation
            switch (op) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    result = num1 / num2;
                    break;
                case '^':
                    result = pow(num1, num2);
                    break;
                case '%':
                    result = fmod(num1, num2);
                    break;
                default:
                    cerr << "Invalid operation." << endl;
                    continue;
            }

            // Print the result
            cout << "Result: " << result << endl;
        } else {
            cerr << "Invalid operation." << endl;
        }
    }
	return 0;
}


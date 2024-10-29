#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int op;

    double num1, num2;

    cout << "Enter a operator : \n 1 : + \n 2 : - \n 3 : * \n 4 : /\n";
    cin >> op;

    if (op < 1 || op > 4) {
        cout << "Error! Invalid operator. Please enter correct operator.\n";
        return 0;
    }

    cout << "Enter two numbers : \n";
    cin >> num1 >> num2;
    cout << "\n";

    switch (op) {
        case 1:
            cout << num1 + num2;
            break;
        case 2:
            cout << num1 - num2;
            break;
        case 3:
            cout << num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed.\n";
                return 0;
            }
            cout << num1 / num2;
            break;
    }

    return 0;
}
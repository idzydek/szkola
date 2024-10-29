#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

string decToSystem(int i, int s) {
    string r;
    while (i != 0) {
        r += to_string(i % s);
        i /= s;
    }

    return r;
}

int main() {
    int num, system;
    string result, sys;

    cout << "Podaj liczbe w systemie dziesietnym: \n";
    cin >> num;
    cout << "Podaj cyfre systemu docelowego: \n";
    cin >> system;

    if (system < 2 || system > 36) {
        cerr << "Podaj prawidlowy system." << endl;
        return 1;
    }

    if (num < 0) {
        string negConverted = decToSystem(abs(num), system);

        if (system != 2) {
            cerr << "Podaj prawidlowy system." << endl;
            return 1;
        } else {
            sys = "U2";
        }

        while (negConverted.length() % 8 != 0) {
            negConverted += '0';
        }

        for (char& c : negConverted) {
            switch (c) {
                case '0':
                    c = '1';
                    break;
                case '1':
                    c = '0';
                    break;
            }
        }

        reverse(negConverted.begin(), negConverted.end());
        result = negConverted;

        int carry = 1;
        for (int i = result.length() - 1; i >= 0; i--) {
            if (result[i] == '0' && carry == 1) {
                result[i] = '1';
                carry = 0;
            } else if (result[i] == '1' && carry == 1) {
                result[i] = '0';
                carry = 1;
            }
        }

        if (carry == 1) {
            result = '1' + result;
        }
    } else if (system > 10) {
        while (num != 0) {
            r += to_string(i % s);
            i /= s;
        }
    } else {
        sys = to_string(system);
        result = decToSystem(num, system);
        reverse(result.begin(), result.end());
    }

    cout << "------" << endl << "Liczba w systemie " << sys << ": " << result << endl;

    return 0;
}
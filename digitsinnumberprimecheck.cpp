#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int input, digits;
    vector<int> digitsArray;

    cout << "------- DIGITS IN NUMBER -------\n";
    cout << "Podaj liczbe: ";
    cin >> input;

    while (input > 1) {
        digits++;
        digitsArray.push_back(input%10);
        input /= 10;
    }
    
    reverse(digitsArray.begin(), digitsArray.end());

    for (int i = 0; i < digitsArray.size(); i++) {
        if (digitsArray[i] % 2 == 0) {
            cout << digitsArray[i] << ": parzysta\n";
        } else {
            cout << digitsArray[i] << ": nieparzysta\n";
        }
    }
    cout << "--------------------------------\n";

    return 0;
}
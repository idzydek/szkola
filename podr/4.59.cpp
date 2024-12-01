#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int decimal = 0;
    int power = 0;
    string num;
    string binary = "";

    cout << "Podaj liczbe w sys16: ";
    cin >> num;
    
    reverse(num.begin(), num.end()); 
    for (char digit : num) {
        int value;
        if (digit >= '0' && digit <= '9') {
            value = digit - '0'; // konwersja na integer
        } else {
            value = toupper(digit) - 'A' + 10; // konwersja liter na cyfry
        }

        decimal += value * pow(16, power);
        power++;
    }

    // system 10 -> system 2
    while (decimal > 0) {
        binary.append(to_string(decimal % 2));
        decimal = decimal / 2;
    }
    
    reverse(binary.begin(), binary.end());

    cout << "Liczba w systemie binarnym: " << binary << endl;

    return 0;
}

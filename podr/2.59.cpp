#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int num, decimal = 0;
    string binary = "";
    int power = 0;

    cout << "Podaj liczbe w sys4: ";
    cin >> num;

    while (num > 0) {
        decimal = decimal + (num % 10) * pow(4, power);
        num = num / 10;
        power++;
    }

    while (decimal > 0) {
        binary.append(to_string(decimal % 2));
        decimal = decimal / 2;
    }
    
    reverse(binary.begin(), binary.end());

    cout << "Liczba w systemie binarnym: " << binary << endl;

    return 0;
}

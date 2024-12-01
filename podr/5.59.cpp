#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int num, third = 0;
    string binary = "";
    int power = 0;

    cout << "Podaj liczbe w sys9: ";
    cin >> num;

    while (num > 0) {
        third = third + (num % 10) * pow(9, power);
        num = num / 10;
        power++;
    }

    while (third > 0) {
        binary.append(to_string(third % 3));
        third = third / 3;
    }
    
    reverse(binary.begin(), binary.end());

    cout << "Liczba w systemie trojkowym: " << binary << endl;

    return 0;
}

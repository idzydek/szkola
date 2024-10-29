#include <iostream>
using namespace std;

int first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }

    return n;
}

int main() {
    cout << first_digit(58893);
}
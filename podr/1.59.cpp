#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int decimal, count;
    cout << "Podaj liczbe dziesietna: ";
    cin >> decimal;

    while (decimal>0) {
        decimal = decimal/2;
        count+=1;
    }

    cout << "Ilosc cyfr potrzebnych do przedstawienia podanej liczby w sys2: " << count;
}
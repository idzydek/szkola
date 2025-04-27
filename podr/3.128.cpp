#include <iostream>
#include <string>

using namespace std;

string func(int keyEven, int keyOdd, string phrase) {
    string result;
    for (int i = 0; i < phrase.size(); i++) {
        char c = phrase[i] + ((i % 2 == 0) ? keyEven : keyOdd);
        if (c > 'Z') c -= 26;
        result += c;
    }
    return result;
}

int main() {
    int keyEven, keyOdd;
    string phrase;

    cout << "Podaj klucz dla parzystych: ";
    cin >> keyEven;

    cout << "Podaj klucz dla nieparzystych: ";
    cin >> keyOdd;

    cout << "Podaj wiadomosc: ";
    cin >> phrase;

    cout << "Wynik: " <<func(keyEven, keyOdd, phrase);
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string cypher(const string& text, const string& key)
{
    string result;
    int keyLength = key.size();

    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i];
        int shift = key[i % keyLength] - '0';
        char newChar = (c - 'A' + shift) % 26 + 'A';
        result += newChar;
    }

    return result;
}

int main()
{
    ifstream inputFile("informacja.txt");

    string text;
    getline(inputFile, text);

    cout << "Wczytano tekst: " << text << endl;

    string key;
    cout << "Klucz: ";
    cin >> key;

    cout << "Wynik: " << cypher(text, key) << endl;
}

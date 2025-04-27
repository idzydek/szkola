#include <iostream>

using namespace std;

const string spol = "BCDFGHJKLMNPQRSTVWXZ";
const string samo = "AEIOUY";

bool czySpol(char c)
{
    string samo = "AEIOUY";
    bool temp;

    for (int i = 0; i < samo.size(); i++) {
        if ( samo[i] == c ) {
            temp = true;
            break;
        } else {
            temp = false;
        }
    }

    return temp;
}

string cypher(string phrase, int keySpol, int keySamo)
{
    string result;

    for (int i = 0; i < phrase.size(); i++)
    {
        char c = phrase[i];
        result += c + (czySpol(c) ? keySpol : keySamo);
    }

    return result;
}

int main()
{
    string text;
    int keySpol, keySamo;

    cout << "Tekst: ";
    cin >> text;

    cout << "Klucz dla spolglosek: ";
    cin >> keySpol;

    cout << "Klucz dla samoglosek: ";
    cin >> keySamo;

    cout << cypher(text, keySpol, keySamo);

    return 0;
}

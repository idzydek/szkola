#include <iostream>
#include <string>
 
using namespace std;
 
string cezar(string phrase, int key)
{
    string result = "";
    for (int i = 0; i < phrase.size(); i++)
    {
        int c = phrase[i] + key;
        if (c>'Z')
            c = c - 26;
        result = result + char(c);
    }
    return result;
}
 
string
 
int main()
{
    string phrase;
    int key;
    cout << "Podaj wiadomosc i klucz: ";
    cin >> phrase >> key;
 
    cout << cezar(phrase, key);
    return 0;
}
 

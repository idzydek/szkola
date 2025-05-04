#include <iostream>
#include <fstream>

using namespace std;

const string latin = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main ()
{
    string text;
    ifstream file("file.txt");
    getline(file, text);

    int counter;

    for (int i=0; i < text.size(); i++)
    {
        for (int ca=0; ca < latin.size(); ca++)
        {
            if (text[i] == latin[ca])
                counter++;
        }
    }

    cout << counter;

    return 0;
}

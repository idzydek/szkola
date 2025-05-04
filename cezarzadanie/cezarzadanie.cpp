#include <iostream>
#include <fstream>

using namespace std;

bool latinLetter(char c)
{
    return ( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z');
}

int main ()
{
    int counter = 0;
    string line;
    ifstream file("input.txt");

    while (getline(file, line)) {
        for (char c : line)
            if(latinLetter(c)) counter++;
    }

    file.close();

    ofstream output("output.txt");
    output << "Liczba liter z alfabetu lacinskiego: " << counter;
    output.close();

    return 0;
}

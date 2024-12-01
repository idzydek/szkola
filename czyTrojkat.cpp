#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    cout << "Podaj kolejno 3 liczby: " << endl;
    cin >> x >> y >> z;

    if (x<0 || y<0 || z<0) {
        cout << "Bok nie moze byc ujemny!"
    } else {
        if (x+y > z && x+z > y && y+z > x) {
            cout << "Podane boki moga stworzyc trojkat";
        } else {
            cout << "Podane boki nie moga stworzyc trojkata";
        }
    }

    return 0;
}
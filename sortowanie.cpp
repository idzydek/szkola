#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    bool b = true;
    cout << "Podaj kolejno 3 rozne cyfry: " << endl;
    cin >> x >> y >> z;
    cout << "Kolejnosc od najmniejszej do najwiekszej: ";

    while (b) {
        if (x<y) {
            if (x<z) {
                if (y<z) {
                    cout << x << y << z;
                    b = false;
                } else { swap(y,z); }
            } else { swap(x,z); }
        } else { swap(x,y); }
    }
    
    return 0;
}
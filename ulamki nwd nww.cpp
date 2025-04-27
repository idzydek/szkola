#include <iostream>

using namespace std;

struct ulamek
{
    int licz, mian;
};

int nwd(int n, int m)
{
    while (n != m) {
        if (n>m) {
            n = n - m;
        } else {
            m = m - n;
        }
    }

    return n;
}

int nww(int n, int m)
{
    return (n * m)/nwd(n, m);
}

ulamek skroc(ulamek &u)
{
    int c = nwd(u.licz, u.mian);
    u.licz = u.licz / c;
    u.mian = u.mian / c;
    return u;
}

ulamek dodaj(ulamek u1, ulamek u2)
{
    skroc(u1);
    skroc(u2);

    int wm = nww(u1.mian, u2.mian);
    u1.licz = u1.licz * (wm/u1.mian);
    u2.licz = u2.licz * (wm/u2.mian);

    ulamek u3;
    u3.licz = u1.licz + u2.licz;
    u3.mian = wm;
    return u3;
}

int main()
{
    ulamek u1;
    u1.licz = 1;
    u1.mian = 2;

    ulamek u2;
    u2.licz = 3;
    u2.mian = 5;

    cout << dodaj(u1, u2).licz << " / " << dodaj(u1, u2).mian;

    return 0;
}

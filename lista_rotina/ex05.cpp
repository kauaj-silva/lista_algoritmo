#include <iostream>

using namespace std;

int elev(int x, int y) {
    int e, i;
    e = 1;
    for (i=1; i<=y; i++) {
        e = e * x;
    }
    return e;
}

int main()
{
    int x, y, e;
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    e = elev(x, y);
    cout << x << " elevado ao " << y << " = " << e << endl;
    return 0;
}

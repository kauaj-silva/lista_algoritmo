#include <iostream>

using namespace std;

float rotTotalPagar(float preco, float qtdd) {
    float total;
    total = preco * qtdd;
    if (total < 11.20) {
        total = 11.20;
    }
    return total;
}

int main()
{
    float p, q, t;
    int n, i, cod;
    cout << "Preco: ";
    cin >> p;
    cout << "Consumidores? ";
    cin >> n;
    for (i=1; i<=n; i++) {
        cout << "Codigo: ";
        cin >> cod;
        cout << "Quantidade: ";
        cin >> q;
        t = rotTotalPagar(p, q);
        cout << "O consumidor " << cod << " deve: " << t << endl;
    }
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

void rotNomeCompleto(char *n, char *sn, char *nc) {
    int i;
    for (i=0; i<strlen(n); i++) {
        nc[i] = n[i];
    }
    nc[i] = ' ';
    for (i=0; i<strlen(sn); i++) {
        nc[strlen(n) + 1 + i] = sn[i];
    }
    nc[strlen(n) + 1 + i] = '\0';
}

int main()
{
    char nome[100], sobrenome[100], nomecompleto[100];
    cout << "Nome: ";
    cin >> nome;
    cout << "Sobrenome: ";
    cin >> sobrenome;
    rotNomeCompleto(nome, sobrenome, nomecompleto);
    cout << "Nome Completo: " << nomecompleto << endl;
    return 0;
}

#include <iostream>
using namespace std;

int calc(int a,int b,int c,int *nota, int *A,int *P)
{
    if(*A==1){
        *nota=(a+b+c)/3;
        return *nota;
    }
    if(*P==1){
        *nota=((a*1)+(b*2)+(c*3))/(+2+3);
    }
}

int main(){
    int a,b,c,nota, A,P;
    cout << "Digite as notas: ";
    cin >> a >> b >> c;
    cout << "Valor de A: ";
    cin >> A;
    cout <<"Valor de P: ";
    cin >> P;
    cout << calc(a,b,c,&nota,&A,&P);
}

#include <iostream>
using namespace std;

int func(int a,int b,int *w, int c)
{
    a>1;
    *w=0;
    for(b=b;b<=c;b++){
        if(b%a==0&&c%a==0){
            *w += b+c;
        }
    }
    return *w;
}

int main()
{
    int a,b,c,w;
    printf("Valor de A, B e C: ");
    scanf("%d%d%d",&a,&b,&c);
    if(func(a,b,&w,c)<=0){
        cout << w;
    }
    return 0;
}

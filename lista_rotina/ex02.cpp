#include <iostream>
using namespace std;

int func(int n1,int n2, int *sum,int *sub,float *diviser,int *mult){
    if(n1>=n2){
        *sum=n1+n2;
        *sub=n1-n2;
        *diviser=n1/n2;
        *mult=n1*n2;
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n1,n2,sum,sub,mult;
    float diviser;
    cout << "N1 e N2: ";
    cin >> n1 >> n2;
    if(func(n1,n2,&sum,&sub,&diviser,&mult))
    {
        printf("Soma = %d \n Sub = %d, \n Diviser = %d \n Mult = %d",sum,sub,diviser,mult);
    }
}

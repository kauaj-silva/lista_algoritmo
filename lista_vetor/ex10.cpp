#include <stdio.h>

int main() {
    int i,j,m,n,r1,r2,c1,c2,sum,p;
    printf("Quantidade de linhas na matriz A: ");
    scanf("%d",&r1);
    printf("Quantidade de colunas na matriz A: ");
    scanf("%d",&c1);
    printf("Quantidade de linhas na matriz B : ");
    scanf("%d",&r2);
    printf("Quantidade de colunas na matriz B : ");
    scanf("%d",&c2);
    if (c1==r2) {
        int A[r1][c1];
        int B[r2][c2];
        for (i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                printf("A[%d][%d]",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        for (i=0;i<r2;i++) {
            for(j=0;j<c2;j++) {
                printf("B[%d][%d]: ",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        printf("\n\nResultant Matrix : \n\n");
        for (i=0;i<r1;i++) {
            for (n=0;n<c2;n++) {
                sum=0;
                for (j=0,m=0;j<c1,j<r2;j++,m++) {
                    p = A[i][j] * B[m][n];
                    sum = sum + p;
                }
                printf(" %d ",sum);
            }
            printf("\n\n");
        }
    }
    else printf("Nao e possivel fazer a multiplicacao");
return 0;
}

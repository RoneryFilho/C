#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int M, N, i, j;

    printf("Quantas linhas?\n");
    scanf("%d", &M);

    printf("Quantas colunas?\n");
    scanf("%d", &N);

    int mat[M][N];

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("Digite o Elemento[%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

}

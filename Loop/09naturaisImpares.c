#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i, N, impar=0;

    scanf("%d", &N);

    printf("\n");
    if(N<=0){
        printf("ERRO, N MENOR QUE 0");
    }else{
        for(i=1;impar<N;i++){
            if((i%2)!=0){
                printf("%d\n", i);
                impar++;
            }
        }
    }
}

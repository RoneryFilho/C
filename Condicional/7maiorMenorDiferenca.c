#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //mostra qual o maior numero e a diferença entre eles
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("Maior número: %d \n", n1);
        printf("Diferença entre os dois: %d \n", n1 - n2);
    }else if(n2 > n1){
        printf("Maior número: %d \n", n2);
        printf("Diferença entre os 2 números: %d \n", n2 - n1);
    }else{
        printf("Números iguais");
    }

}

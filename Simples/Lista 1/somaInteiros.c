#include <stdio.h>
#include <locale.h>

int main(void){

    int n1, n2, n3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &n3);

    printf("Soma dos numeros: %d",  n1+n2+n3);
}

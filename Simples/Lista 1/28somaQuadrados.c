#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //soma do quadrado de tres numeros
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    printf("Digite outro numero: ");
    scanf("%f", &n2);

    printf("Digite outro numero: ");
    scanf("%f", &n3);

    printf("Soma dos quadrados: %.2f", pow(n1,2) + pow(n2,2) + pow(n3,2));

}

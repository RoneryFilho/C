#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //mostra qual o maior numero e a diferen�a entre eles
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("Maior n�mero: %d \n", n1);
        printf("Diferen�a entre os dois: %d \n", n1 - n2);
    }else if(n2 > n1){
        printf("Maior n�mero: %d \n", n2);
        printf("Diferen�a entre os 2 n�meros: %d \n", n2 - n1);
    }else{
        printf("N�meros iguais");
    }

}

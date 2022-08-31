#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //se o numero for positivo, imprima o Logarítmo na base 2, se nao, diga que é inválido
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um número inteiro positivo: ");
    scanf("%f", &num);

    if(num > 0){
        printf("Logarítmo: %f", log2(num));
    }else{
        printf("NÚMERO INVÁLIDO");
    }
}

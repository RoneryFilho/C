#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //se o numero for positivo, imprima o Logar�tmo na base 2, se nao, diga que � inv�lido
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um n�mero inteiro positivo: ");
    scanf("%f", &num);

    if(num > 0){
        printf("Logar�tmo: %f", log2(num));
    }else{
        printf("N�MERO INV�LIDO");
    }
}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Checa se os numeros sao iguais
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("Maior número: %f", num1);
    }else if(num2 > num1){
        printf("Maior número: %f", num2);
    }else{
        printf("Números Iguais");
    }

}

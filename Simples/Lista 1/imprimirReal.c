#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float num;

    printf("Digite um numero real de até 2 casas decimais: \n");
    scanf("%f", &num);

    printf("Voce digitou: %.2f", num);

}

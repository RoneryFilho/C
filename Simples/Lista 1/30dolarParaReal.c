#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float real, dolar;

    printf("Digite valor em reais: ");
    scanf("%f", &real);

    printf("Digite a cota��o do dolar: ");
    scanf("%f", &dolar);

    printf("Valor em d�lares: %.2f", real * dolar);
}

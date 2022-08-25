#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float real, dolar;

    printf("Digite valor em reais: ");
    scanf("%f", &real);

    printf("Digite a cotação do dolar: ");
    scanf("%f", &dolar);

    printf("Valor em dólares: %.2f", real * dolar);
}

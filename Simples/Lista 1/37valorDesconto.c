#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //imprime o valor do produto com dexconto de 12%
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Valor do produto com 12 porcento de desconto: %f", valor - (valor *0.12));

}

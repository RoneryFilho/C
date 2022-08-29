#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Dividindo o valor de 780.000,00 entre 3 pessoasd
    setlocale(LC_ALL, "Portuguese");

    float valor = 780000.00;

    printf("O valor do premio de 780.000,00 será dividido entre tres ganhadores \n");
    printf(" \n");

    printf("Primeiro lugar, com 46 porcento do premio no valor de: %.2f \n", valor * 0.46);
    printf(" \n");

    printf("Primeiro lugar, com 32 porcento do premio no valor de: %.2f \n", valor * 0.32);
    printf(" \n");

    printf("Primeiro lugar, com 32 porcento do premio no valor de: %.2f \n", valor * 0.22);

}

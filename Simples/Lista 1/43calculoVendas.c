#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Calcula valor de parcelas com desconto
    setlocale(LC_ALL, "Portuguese");

    float valor, comiDesc, comiTotal;

    printf("Preço do produto: ");
    scanf("%f", &valor);

    printf("Total a pagar com 10 %% de desconto: %.2f \n", valor - (valor * 0.1));

    printf("Valor de cada parcela em 3x sem juros: %.2f \n", valor / 3);

    printf("Comissão do vendedor de 5%% do valor com desconto se parcelado: %.2f \n", (valor - (valor * 0.1)) * 0.05 );

    printf("Comissão do vendedor de 5%% do valor bruto em caso de pagamento a vista: %.2f \n", valor * 0.05);


}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Calcula e imprime o valor do salario com bonificação de 5% e 7% de imposto
    setlocale(LC_ALL, "Portuguese");

    float salBruto;

    printf("Insira o salario: ");
    scanf("%f", &salBruto);

    printf("Salario Líquido: %.2f", salBruto - (salBruto * 0.07) + (salBruto * 0.05));

}

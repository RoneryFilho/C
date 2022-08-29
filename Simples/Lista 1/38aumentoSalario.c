#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcula o aumento de 25% do salario de um funcionario
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Salario com aumento de 25 por cento: %.2f", salario + ( salario * 0.25));

}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //le o numero de dias trabalhados e calcula o salario liquido descontando 8% de imposto
    setlocale(LC_ALL, "Portuguese");

    float sal = 30 , salTotal, dias;

    printf("Dias trabalhados: ");
    scanf("%f", &dias);

    salTotal = sal * dias;

    printf("Salario Total: %.2f", salTotal - (salTotal * 0.08));

}

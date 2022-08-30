#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcula o salario baseado em horas trabalhadas, depois adiciona 10% a mais no valor
    setlocale(LC_ALL, "Portuguese");

    float horas, valHora, valTotal;

    printf("Numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Valor da hora: ");
    scanf("%f", &valHora);

    valTotal = horas * valHora;

    printf("Valor total a ser pago: %.2f", valTotal + (valTotal * 0.1));


}

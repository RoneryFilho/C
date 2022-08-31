#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //se positivo, calcular raiz quadrada
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um número positivo: ");
    scanf("%f", &num);

    if(num > 0){

        printf("Raiz quadrada: %.2f", sqrt(num));

    }else{

        printf("NUMERO INVÁLIDO!");

    }

}

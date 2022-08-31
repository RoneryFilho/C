#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //se positivo, imprima a raiz, se negativo imprima o quadrado
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0){

        printf("Raiz quadrada: %.2f", sqrt(num));

    }else{

        printf("Quadrado: %.2f", pow( num,2));

    }


}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //imprime o quadrado e a raiz de um numero SE ele for positivo
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 0){

        printf("Raiz do numero: %f \n",sqrt(num));
        printf("Quadrado do numero: %f \n", pow(num,2));

    }else if (num == 0){

        printf("Zero");

    }else{

        printf("Numero negativo");

    }

}

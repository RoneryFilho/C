#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcula seu IMC baseado no seu sexo e altura
    setlocale(LC_ALL, "Portuguese");

    float alt;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &alt);

    fflush(stdin);

    printf("Digite seu sexo (M) ou (F): ");
    scanf("%c", &sexo);

    if(sexo == 'M'){
        printf("Peso ideal: %.2f", (72.7*alt)-58);
    }else if(sexo == 'F'){
        printf("Peso ideal: %.2f", (62.1 * alt)-44.7);
    }

}

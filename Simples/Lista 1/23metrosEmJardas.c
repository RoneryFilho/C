#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //metros em jardas
    setlocale(LC_ALL, "Portuguese");

    float mt;

    printf("Digite a distancia em metros: ");
    scanf("%f", &mt);

    printf("Distancia em jardas %.1f", mt / 0.914);

}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //jardas em metros
    setlocale(LC_ALL, "Portuguese");

    float jarda;

    printf("Distancia em jardas: ");
    scanf("%f", &jarda);

    printf("Distancia em metros: %.1f", jarda * 0.914);

}

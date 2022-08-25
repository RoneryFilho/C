#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //metros quadrados em acres
    setlocale(LC_ALL, "Portuguese");

    float m2;

    printf("Digite a area em metros quadrados: ");
    scanf("%f", &m2);

    printf("Area em acres: %.6f", m2*0.000247);
}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo Metros c�bicos em litros
    setlocale(LC_ALL,"Portuguese");

    float m3;

    printf("Digite um volume em Metros C�bicos: ");
    scanf("%f", &m3);

    printf("Volume em Litros: %.1f", m3*1000);

}

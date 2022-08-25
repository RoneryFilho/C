#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //metros em metros cubicos
    setlocale(LC_ALL, "Portuguese");

    float fec, c1, c2, c3;

    printf("Digite as medidas em centimetros ou metros: \n");
    scanf("%f", &c1);
    scanf("%f", &c2);
    scanf("%f", &c3);

    printf("Medida em M³ caso tenha digitado em CM: %.10f \n", c1*c2*c3 / 1000000 );
    printf("Medida em M³ padrão caso tenha digitado em Metros: %.3f \n", c1*c2*c3);

    printf("Digite algo e aperte enter para fechar o programa: ");
    scanf("%f", &fec);

}

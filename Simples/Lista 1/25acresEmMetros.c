#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //acres em metros
    setlocale(LC_ALL, "Portuguese");

    float acre;

    printf("Digite a area em acres: ");
    scanf("%f", &acre);

    printf("Area em metros: %.2f", acre * 4048.58);

}

#include <stdio.h>
#include<math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    float tara, peso, kilo, pesoReal, valor;

    printf("Digite a tara do prato: ");
    scanf("%f", &tara);

    printf("Digite o peso total: ");
    scanf("%f", &peso);

    printf("Digite o valor do kilo: ");
    scanf("%f", &kilo);

    if(tara > 0 && peso >= tara){
        pesoReal = peso - tara;
        valor = kilo * pesoReal;

        printf("Preço do prato: %.2f", valor);
    }
}

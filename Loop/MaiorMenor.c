#include <stdio.h>
#include <math.h>
#include <locale.h>
//diz qual é o maior e o menor numero
int main(void){
    setlocale(LC_ALL, "Portuguese");
    float N,i,maior, menor;

    i=1;
    while (i<=5){
        printf("Digite um número: ");
        scanf("%f", &N);

        if(i==1){
            maior = N;
            menor = N;
        }
        else if(N>maior){
            maior = N;
        }
        else if(N<menor){
            menor = N;
        }
        i++;
    }
    printf("Maior: %.2f, Menor: %.2f", maior, menor);
}

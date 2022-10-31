#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");

    int i, array[10], maior=0, menor=0;

    for(i=0;i<=9;i++){
        scanf("%d", &array[i]);
    }

    maior = array[0];
    menor = array[0];

    for(i=1;i<=9;i++){
        if(array[i]>maior){
            maior = array[i];
        }else if(array[i]<menor){
            menor = array[i];
        }
    }
    printf("Menor: %d Maior: %d", menor, maior);
}

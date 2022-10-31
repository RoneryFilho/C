#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int N,ordem,swap,loop,loop2;
        printf("Quantos elementos terá o array?\n");
        scanf("%d", &N);
    int array[N];

        printf("Digite os %d números que irão compor o array: \n", N);
    for(loop = 0; loop<N; loop++){
        scanf("%d", &array[loop]);
    }

    printf("Quer que os numeros sejam mostrados em ordem [1]Crescente ou [2]Decrescente?\n");
    scanf("%d", &ordem);

    if(ordem == 1){      //bubble sorting para coloca em ordem crescente
    for(loop=0; loop<N; loop++){
        for(loop2=1; loop2<N; loop2++){
            if((array[loop2-1])>array[loop2]){
                swap = array[loop2-1];
                array[loop2-1] = array[loop2];
                array[loop2] = swap;
                swap = 0;
            }
        }
    }
    }else if(ordem == 2){
       for(loop2=1; loop2<N; loop2++){
            if((array[loop2-1])<array[loop2]){
                swap = array[loop2-1];
                array[loop2-1] = array[loop2];
                array[loop2] = swap;
                swap = 0;
            }

        }
    }else{
        printf("OPÇÃO INVÁLIDA");
    }

        printf("\n");

    for(loop=0;loop<N;loop++){
        printf("%d\n",array[loop]);
    }

}

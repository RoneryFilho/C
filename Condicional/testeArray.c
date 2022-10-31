#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
    setlocale(LC_ALL,"Portuguese");
    int cont,loop,loop2,size,order;
    printf("Quantos numeros pretende ordenar?\n");
    scanf("%i",&size);
    int num[size];
    printf("Quais são os %i numeros que pretende ordenar?\n",size);
    cont=0;
    for(cont=0;cont<size;cont++){
        scanf("%i",&num[cont]);
    }
    printf("Em qual ordem pretende colocar?\n[1]Crescente\n[2]Decrescente\n");
    scanf("%i",&order);
    if(order==1){
        for(loop=0;loop<size;loop++){
            for(loop2=0;loop2<size;loop2++){
                if(num[loop2]>num[loop2+1]){
                    num[size]=num[loop2];
                    num[loop2]=num[loop2+1];
                    num[loop2+1]=num[size];
                    num[size]=0;
                    }
            }
        }
    }
    else if(order==2){
        for(loop=0;loop<size;loop++){
            for(loop2=0;loop2<size;loop2++){
                if(num[loop2]<num[loop2+1]){
                    num[size]=num[loop2];
                    num[loop2]=num[loop2+1];
                    num[loop2+1]=num[size];
                    num[size]=0;
                    }
            }
        }
    }
    else{printf("Esta opção não existe\n");
    }
    if(order==1||order==2){
    printf("Numeros ordenados:\n");
        for(cont=0;cont<size;cont++){
            printf("%i\n",num[cont]);
        }
    }
}

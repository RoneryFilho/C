#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    double dol, real;

    printf("Real: ");
    scanf("%lf", &real );


    if(real<0){
        printf("ERRO REAL");
    }else{
        printf("Cota��o: ");
        scanf("%lf", &dol);

        if(dol<0){
            printf("ERRO COTA��O");
        }else{
            printf("D�lar: %.2lf", real / dol);
    }
    }

}

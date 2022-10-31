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
        printf("Cotação: ");
        scanf("%lf", &dol);

        if(dol<0){
            printf("ERRO COTAÇÃO");
        }else{
            printf("Dólar: %.2lf", real / dol);
    }
    }

}

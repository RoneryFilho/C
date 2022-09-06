#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //checa se o aluno passou ou nao baseado na nota
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, notaF;

    printf("Digite as 3 notas, separadas por um espaço: ");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    notaF = ((nota1*2)+(nota2*3)+(nota3*5))/10;

    if(notaF < 3){

        printf("Nota Final: %.1lf\n", notaF);
        printf("REPROVADO");

    }
    else if((notaF >=3)&&(notaF < 5)){

        printf("Nota: %.1lf\n", notaF);
        printf("RECUPERAÇÃO");

    }
    else{

        printf("Nota: %.1lf\n", notaF);
        printf("APROVADO");

    }



}

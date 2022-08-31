#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
    //calcula se permite ou não um emprestimo baseado no salário informado, concede apenas se o emprestimo for 20% ou menos que o salario
    setlocale(LC_ALL, "Portuguese");

    float sal, emp;

    printf("Digite seu salário: ");
    scanf("%f", &sal);

    printf("Digite o valor que deseja de empréstimo: ");
    scanf("%f", &emp);

    if(emp > (sal * 0.2)){
        printf("Empréstimo negado!");
    }else{
        printf("Empréstimo aprovado!");
    }

}

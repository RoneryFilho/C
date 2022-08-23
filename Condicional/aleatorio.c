#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void){

    setlocale(LC_ALL, "Portuguese"); //utilizar so mente a virgula na execução
	float num1, num2, oper,resto, divisao;

	printf("Digite um numero inteiro: \n");
	scanf("%f", &num1);

	printf("Digite outro numero inteiro: \n");
	scanf("%f", &num2);

	printf("Digite uma operacao desejada: \n");
	printf("1 - Media entre os dois numeros \n");
	printf("2 - Diferenca do maior pelo menor \n");
	printf("3 - Produto entre os dois numeros \n");
	printf("4 - Divisao do primeiro pelo segundo \n");

	scanf("%f", &oper);

	if (num1 == 0 || num2 == 0){

        printf("ZERO NÃO DIVIDE");

	}
	else if(oper == 1){

		printf("%.2f", (num1 + num2)/2);

	}
	else if(oper == 2 && num1 > num2){

		resto = num1 - num2;
		printf("%.2f", resto );

	}
	else if (oper == 2 && num2 > num1){

		resto = num2 - num1;
		printf("%.2f", resto);

	}
	else if ( oper == 3 ){

        printf("Produto dos numeros: ");
        printf("%.2f", num1 * num2);

	}
	else if( oper == 4){

        divisao = num1 / num2;
        printf("Divisão do maior pelo maior: ");
        printf("%.2f", divisao);

	}
}

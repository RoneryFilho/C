#include <iostream>
#include <math.h>

int main(void){
	
	int num1, num2, mod, quo;
	
	printf("Primeiro Numero: \n");
	scanf("%d", &num1);
	
	printf("Segundo Numero: \n");
	scanf("%d", &num2);

	mod = num1 % num2;
	quo = num1/num2;
	
	printf("Restante: %d \n", mod);
	printf("Quociente: %d \n", quo);
	//printf("%d", num1%num2); <- Metodo de fazer sem usar variavel mod
}

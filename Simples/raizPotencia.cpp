#include <iostream>
#include <math.h>

int main(void){
		
	float num, raizc;
	
	printf("Digite o numero: \n");
	scanf("%f", &num);
	
	raizc = pow(num, 1.0/3.0);
	
	printf("Raiz Cubica: %.2f \n", raizc);
	printf("Raiz Quadrada: %.2f \n", sqrt(num));
	
	
}

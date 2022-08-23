#include <iostream>
#include <math.h>

int main(void){
	
	float area, perimetro, lado;
	
	printf("Digite a medida do lado: \n");
	scanf("%f", &lado);
	
	area = pow (lado, 2);
	
	perimetro = lado * 4;
	
	printf("Area: %.2f \n", area);
	printf("Perimetro : %.2f \n", perimetro);
	
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1, num2, num3;
	int maximo, minimo;
	
	printf("Ingrese el primer numero: ");
	scanf(" %d", &num1);
	
	printf("Ingrese el segundo numero: ");
	scanf(" %d", &num2);
	
	printf("Ingrese el tercer numero: ");
	scanf(" %d", &num3);
	
	maximo = num1;
	
	if (num2 > maximo){
		
		maximo = num2;
	}
	
	if (num3 > maximo){
		
		maximo = num3;
	}
	
	minimo = num1;
	
	if (num2 < minimo){
		
		minimo = num2;
	}
	
	if (num3 < minimo){
		
		minimo =  num3;
	}
	
	printf("\nEl numero mayor es: %d\n", maximo);
	printf("El numero menor es: %d\n", minimo);
	
	return 0;
}
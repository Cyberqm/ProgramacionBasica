#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n, suma = 0;
	
	int contador = 0;
	
	printf("Ingrese numeros positivos. Ingrese un numero negativo para terminar.\n ");
	
	while(1) {
		
		printf("\nIngrese un numero:");
		scanf("%f", &n);
		
		if (n < 0) {
			
			break;
		}
		
		
		suma += n;
		contador ++;
		
	}
	
	if (contador > 0) {
		
		float promedio = suma / contador;
		
		printf("\nLa suma de los numeros positivos es: %.2f\n", suma);
		printf("\nEl promedio de los numeros positivos es: %.2f\n", promedio);
		
	} else {
		
		printf("\nNo se ingresaron numeros positivos.\n");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, n, lim;
	char opcion;
	
	do {
		
		printf("\nIngrese un numero: ");
		scanf("%d", &n);
		
	
	printf("Ingrese el limite de la tabla: ");
	scanf("%d", &lim);
	
	if (lim < 1) {
		
		printf("Entrada Invalida. Por favor vuelva a digitar un numero.\n ");
		
	}
	
	printf("\nLa Tabla de Multiplicar de %d es:\n", n, lim);
	
	for (i = 1; i <= lim; i++) {
		
		printf("%d * %d = %d\n", n, i, n*i);
		
	}
	
	printf("\nDesea mostrar otra tabla de multiplicar? (Y/N): ");
	scanf(" %c", &opcion);
		
	} while (opcion == 'Y' || opcion == 'y');
		
	return 0;
}

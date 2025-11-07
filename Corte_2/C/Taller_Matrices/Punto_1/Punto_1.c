#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[4][4];
	int i, j;
	int contadorPares = 0;
	
	printf("Ingrese los valores de la matriz 4x4:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			if (matriz[i][j] % 2 == 0) {
				
				contadorPares++;
			}
		}
	}
	
	printf("\nLa matriz ingresada es:\n");
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d\t", matriz[i][j]);
		}
		
		printf("\n");
		
	}
	
	printf("Cantidad de numeros pares en la matriz: %d\n", contadorPares);
	
	return 0;
}
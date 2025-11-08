#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float matriz[4][4];
	float sumaFilas[4];
	float sumaColumnas[4];
	int i, j;
	
	for (i = 0; i < 4; i++) {
		
		sumaFilas[i] = 0;
		sumaColumnas[i] = 0;
		
	}
	
	printf("Ingrese los elementos de la matriz 4x4:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
			
		}
	}
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			sumaFilas[i] += matriz[i][j];
			sumaColumnas[i] += matriz [i][j];
			
		}
	}
	
	printf("\nMatriz con sumas:\n");
	
	for (i = 0; i < 4; i++) {
		
		for ( j = 0; j < 4; j++) {
			
			printf("%6.2f", matriz[i][j]);
			
		}
		
		printf(" = %.2f\n", sumaFilas[i]);
		
	}
	
	printf("\n");
	
	for (j = 0; j < 4; j++) {
		
		printf("%6.2f", sumaColumnas[j]);
		
	}
	
	printf("\n");
	
	return 0;
}
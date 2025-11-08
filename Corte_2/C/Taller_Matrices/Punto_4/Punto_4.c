#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[4][4];
	int maximos[4];
	int i, j;
	int maximo;
	float promedio = 0;
	
	printf("Ingrese los valores de la matriz 4x4:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (i = 0; i < 4; i++) {
		
		maximo = matriz[i][0];
		
		for (j = 0; j < 4; j++) {
			
			if (matriz[i][j] > maximo) {
				
				maximo = matriz[i][j];
			}
			
		}
		
		maximos[i] = maximo;
	}
	
	for (i = 0; i < 4; i++) {
		
		promedio += maximos[i];
		
	}
	
	promedio = promedio / 4;
	
	printf("\n");
	printf("\nMatriz Ingresada:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d ", matriz[i][j]);
			
		}
		
		printf("| Maximo: %d\n", maximos[i]);
	}
	
	printf("\n");
	printf("\nPromedio de los maximos = %.2f\n", promedio);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[4][4];
	int maximos[4];
	int i, j;
	int maximo;
	
	printf("Ingrese los elementos de la matriz 4x4:\n");
	
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
	
	printf("\n");
	printf("\nLa matriz ingresada es:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d ", matriz[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("\nVector de maximos:\n");
	
	for (i = 0; i < 4; i++) {
		
		printf("%d ", maximos[i]);
		
	}
	
	printf("\n");
	
	return 0;
	

}

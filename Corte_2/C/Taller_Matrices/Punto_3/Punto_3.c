#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[4][4];
	int i, j;
	
	int maximo, minimo;
	int suma = 0;
	float promedio;
	
	printf("Ingresa los valores de la matriz 4x4:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	maximo = matriz[0][0];
	minimo = matriz[0][0];
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			int valor = matriz[i][j];
			
			suma += valor;
			
			if (valor > maximo) {
				
				maximo = valor;
				
			}
			
			if (valor < minimo) {
				
				minimo = valor;
			}
		}
	}
	
	promedio = (float) suma / 16;
	
	printf("\n");
	printf("La matriz ingresada es:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("%d\t", matriz[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n");
	printf("Valor maximo: %d\n", maximo);
	printf("Valor minimo: %d\n", minimo);
	printf("Suma total: %d\n", suma);
	printf("Promedio de todos los elementos: %.2f\n", promedio);
	printf("\n");
	
	return 0;
}
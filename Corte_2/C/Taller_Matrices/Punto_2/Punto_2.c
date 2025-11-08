#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matriz[4][4];
	int i, j;
	
	int sumaPares = 0, sumaImpares = 0;
	int sumaPosPares = 0, sumaPosImpares = 0;
	int contPares = 0, contImpares = 0;
	int contPosPares = 0, contPosImpares = 0;
	
	printf("Ingrese los valores de la matriz 4x4:\n");
	
	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
			
			if (matriz[i][j] % 2 == 0) {
				
				sumaPares += matriz[i][j];
				contPares++;
				
			} else {
				
				sumaImpares += matriz[i][j];
				contImpares++;
			}
			
			int posicion = i * 4 + j;
			
			if (posicion % 2 == 0) {
				
				sumaPosPares += matriz[i][j];
				contPosPares++;
				
			} else {
				
				sumaPosImpares += matriz[i][j];
				contPosImpares++;
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
	
	float promedioPares, promedioPosPares, promedioImpares, promedioPosImpares;
	
	if (contPares != 0) {
		
		promedioPares = (float) sumaPares / contPares;
		
	} else {
		
		promedioPares = 0;
		
	}
	
	if (contImpares != 0) {
		
		promedioImpares = (float)sumaImpares / contImpares;
		
	} else {
		
		promedioImpares = 0;
		
	}
	
	if (contPosPares != 0) {
		
		promedioPosPares = (float) sumaPosPares / contPosPares;
		
	} else {
		
		promedioPosPares = 0;
		
	}
	
	if (contPosImpares != 0) {
		
		promedioPosImpares = (float) sumaPosImpares / contPosImpares;
		
	} else {
		
		promedioPosImpares = 0;
		
	}
	
	printf("----- Resultados -----\n");
	
    printf("Suma de numeros pares: %d\n", sumaPares);
    printf("Media de numeros pares: %.2f\n", promedioPares);

    printf("Suma de numeros impares: %d\n", sumaImpares);
    printf("Media de numeros impares: %.2f\n", promedioImpares);

    printf("Suma de numeros en posiciones pares: %d\n", sumaPosPares);
    printf("Media de numeros en posiciones pares: %.2f\n", promedioPosPares);

    printf("Suma de numeros en posiciones impares: %d\n", sumaPosImpares);
    printf("Media de numeros en posiciones impares: %.2f\n", promedioPosImpares);
	
	
	return 0;
}
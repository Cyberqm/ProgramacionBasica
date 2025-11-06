#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int arr[2][3][4];
	int i, j, k;
	
	printf("Ingresa los 24 enteros para el arreglo tridimensional:\n");
	
	for (i = 0; i < 2; i++) {
		
		for (j = 0; j < 3; j++) {
			
			for (k = 0; k < 4; k++) {
				
				printf("Ingresa el elemento arr[%d][%d][%d]:", i, j, k);
				scanf("%d", &arr[i][j][k]);
			}
		}
	}
	
	printf("\nArreglo cargado:\n");
	
	for (i = 0; i < 2; i++) {
		
		for (j = 0; j < 3; j++) {
			
			for (k = 0; k < 4; k++) {
				
				printf("%d ", arr[i][j][k]);
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}
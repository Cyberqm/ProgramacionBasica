#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N, M, i, contador = 0;
	
	do {
		
		printf("Ingrese el valor de N: ");
		scanf("%d", &N);
		
		printf("Ingrese el valor de M: ");
		scanf("%d", &M);
		
		if (N <= M) {
			
			printf("El valor de N tiene que ser mayor a M. Ingrese de nuevo los valores.\n");
				
		}
		
	} while (N <= M);
	
	printf ("Los numeros pares entre %d y %d son:\n", N, M);
	
	for (i = M + 1; i < N; i++) {
		
		if (i % 2 == 0) {
			
			printf("%d\n", i);
			
			contador++;
			
			if (contador == 3) {
				
				break;
			}
			
		}
		
	}
	
	if (contador < 3) {
		
		printf("\nNo hay 3 numeros pares entre los valores ingresados.\n");
		
	} else {
		
		printf("\nSe mostraron los 3 primeros numeros pares.\n");
	}
	
	return 0;
}
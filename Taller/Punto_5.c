#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	float apuesta;
	int moneda;
	char continuar = 'y';
	
	srand(time(NULL));
	
	printf("=== Doble o Nada ===\n");
	
	do {
		
		printf("\nIngrese la cantidad que desea apostar: ");
		scanf(" %f", &apuesta);
		
		moneda = rand() % 2;
		
		printf("Lanzando la moneda...\n");
		
		if (moneda == 1) {
			
			printf("Salio Cara! Ganas el doble de la apuesta.\n");
			printf("Tu ganancia es: %.2f\n", apuesta * 2);
			
		} else {
			
			printf("Salio Cruz! Pierdes toda la apuesta.\n");
			printf("Tu saldo ahora es de: 0.00\n");
			
		}
			
		printf("\n Desea jugar de nuevo? (Y/N): ");
		scanf(" %c", &continuar);
		
	} while (continuar == 'y' || continuar == 'Y');
	
	printf("\n Gracias por jugar.\n");
	
	return 0;
	
}
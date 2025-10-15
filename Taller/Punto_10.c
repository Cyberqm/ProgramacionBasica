#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int secreto, intento, contadorIntentos;
	char opcion;
	
	srand((unsigned int) time(NULL));
	
	do {
		
		secreto = (rand() % 10) + 1;
		
		contadorIntentos = 0;
			
	printf("Adivina el numero entre 1 y 10.\n");
	
	do {
		
		printf("Introduce un numero (1-10): ");
		if (scanf("%d", &intento) != 1) {
		
		int c;
		
		printf("Entrada invalida. Por favor introducir un numero entre el 1 al 10.\n");
		
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		continue;
		
		}
		
	if (intento < 1 || intento > 10) {
		
		printf("Numero invalido. Ingresa un numero entre 1 y 10.\n");
		
		continue;
	}
	
	contadorIntentos++;
	
	if (intento < secreto) {
		
		printf("Demasiado bajo. Intenta de nuevo.\n");
		
	} else if (intento > secreto) {
		
		printf("Demasiado alto. Intenta de nuevo.\n");
		
	} else {
		
		printf("Felicidades! El numero era %d.\n", secreto);
		printf("Lo lograste en %d intento(s).\n", contadorIntentos);
		
	}
		
	} while (intento != secreto);
	
	printf("Desea jugar otra vez? (Y/N): ");
	scanf(" %c", &opcion);
	
   } while (opcion == 'Y' || opcion == 'y');
	
	return 0;
}
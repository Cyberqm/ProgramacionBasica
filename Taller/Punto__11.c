#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char password[] = "password123";
	char entrada[50];
	char opcion;
	int intentos, acierto;
	
	do {
		
		intentos = 0;
		acierto = 0;
		
		while (intentos < 3 && !acierto) {
			
			int i, iguales = 1;
			
			printf("Introduzca la contrasena: ");
			scanf("%49s", entrada);
			
			for (i = 0; password[i] != '\0' || entrada[i] != '\0'; i++) {
				
				if (password[i] != entrada[i]) {
					
					iguales = 0;
					
					break;
				}
			}
			
			intentos++;
			
			if (iguales) {
				
				printf("Contrasena Correcta.\n");
				
				acierto = 1;
				
			} else {
				
				if (intentos < 3) {
					
					printf("Contrasena Incorrecta. Intentos Restantes: %d\n", 3 - intentos);
					
				}
			}
		}
		
		if (!acierto) {
			
			printf("Lo siento. Contrasena Erronea.\n");
			
		
		
		printf("\nDesea volver a intentarlo? (Y/N): ");
		scanf(" %c", &opcion);
		
		} else {
			
			opcion = 'n';
			
		}
		
	} while (opcion == 'Y' || opcion == 'y');
	
	return 0;
}
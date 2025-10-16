#include <stdio.h>
#include <stdlib.h>

int main() {
	
	const char password[] = "12345";
	char entrada[50];
	int intentos = 0;
	int acierto = 0;
	
	while (intentos < 3 && !acierto) {
		
		int i, iguales = 1;
		
		printf("Introduzca la contrasena: ");
		scanf("%49s", entrada);
		
				
		for (i = 0; password[i] != '\0' || entrada[i] != '\0'; i++) {
			
			if(password[i] != entrada[i]) {
				
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
				
				printf("Contrasena Incorrecta. Intentos restantes: %d\n", 3 - intentos);
				
			}
		}	
	}
	
	if (!acierto) {
		
		printf("Lo siento. Contrasena incorrecta.\n");
	}
	
	return 0;
}
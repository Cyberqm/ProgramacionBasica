#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre[30];
	int i;
	
	printf("Ingrese su nombre: ");
	scanf("%s", nombre);
	
	printf("Espaciado:\n");
	
	for (i = 0; nombre[i] != '\0'; i++) {
		
		printf("%c", nombre[i]);
		
		if (nombre[i + 1] != '\0') {
			
			printf(" ");
		}
	}
	
	printf("\n");
	
	return 0;
}
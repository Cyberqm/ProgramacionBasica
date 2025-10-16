#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, i, primo = 1;
	char opcion;
	
	do {
		
		printf("Ingrese un numero positivo: ");
		scanf("%d", &n);
		
	if (n <= 1) {
		
		printf("El numero no es primo.\n");
		
		return 0;
		
	}
	
	for (i = 2; i < n; i++) {
		
		if (n % i == 0){
			
			primo = 0;
			
			break;
			
		}
		
	}
	
	if (primo == 1) {
		
		printf("El numero %d es Primo.\n", n);
		
	} else {
		
		printf("El numero %d no es Primo.\n", n);
	}
	
     printf("Desea ingresar otro numero? (Y/N): ");
      scanf(" %c", &opcion);
	
    } while (opcion == 'Y' || opcion == 'y');
	
	return 0;
}
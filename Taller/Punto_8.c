#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int anio;
	
	printf("Ingrese el anio: ");
	scanf("%d", &anio);
	
	if (anio <= 0) {
		
		printf("Error: Ingrese un anio positivo mayor que 0.\n");
		
		return 0;
	}
	
	int div4 = (anio % 4 == 0);
	int div100 = (anio % 100 == 0);
	int div400 = (anio %400 == 0);
	
	if (div4 && (!div100 || div400)) {
		
		printf("%d es un anio bisiesto.\n", anio);
		
	} else {
		
		printf("%d no es un anio bisiesto.\n", anio);
	}
	
	return 0;
}
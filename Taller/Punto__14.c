#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	int positivos = 0, negativos = 0;
	
	while (1) {
		
		printf("Ingrese un numero. Ingrese 0 para terminar. ");
		scanf("%d", &n);
		
		if (n == 0) {
			
			break;
			
		} else if (n < 0) {
			
			negativos++;
			
		} else {
			
			positivos++;
		}
	}
	
	printf("Cantidad de numeros positivos: %d\n", positivos);
	printf("Cantidad de numeros negativos: %d\n", negativos);
	
	return 0;
}
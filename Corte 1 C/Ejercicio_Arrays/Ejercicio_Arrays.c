#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre1[] = "Samuel";
	char nombre2[] = "Sam";
	int i;
	int tam1 = 0, tam2 = 0;
	
	for (i = 0; nombre1[i] != '\0'; i++) {
		
		tam1++;
	}
	
	for (i = 0; nombre2[i] != '\0'; i++) {
		
		tam2++;
	}
	
	if (tam1 == tam2) {
		
		printf("Los arrays son iguales.\n ");
		
	} else {
		
		printf("Los arrays no son iguales.\n ");
	}
	
	return 0;
}
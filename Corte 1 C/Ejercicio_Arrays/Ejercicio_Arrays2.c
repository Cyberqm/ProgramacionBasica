#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int array1[] = {10, 25, 50, 75, 100};
	int lon1 = sizeof(array1) / sizeof(array1[0]);
	
	int array2[] = {10, 25, 50, 75, 100};
	int lon2 = sizeof(array2) / sizeof(array2[0]);
	
	if (lon1 != lon2) {
		
		printf("Las matrices no son iguales.\n");
		
		return 0;
	}
	
	
	int equi = 1;
	
	int i;
	
	for (i = 0; i < lon1; i++) {
		
		if (array1[i] != array2[i]) {
			
			equi = 0;
			
			break;
		}
		
		
	} if (equi == 1) {
		
		printf("Las matrices son iguales.\n");
		
	} else {
		
		printf("Las mastrices no son iguales.\n");
	}
	
	return 0;
}
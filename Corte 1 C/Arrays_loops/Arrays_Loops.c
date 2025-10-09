#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {25, 50, 75, 100};
	int i;
	
	for(i = 0; i < 4; i++) {
		
		printf("%d\n", myNumbers[i]);	
	}	
	
	printf("Siguiente ejemplo arrays_loops\n");
	
	int myValues[] = {25, 50, 75, 100};
	int length = sizeof(myValues) / sizeof(myValues[0]);
	
	for(i = 0; i < length; i++) {
		printf("%d\n", myValues[i]);
	}	
	
	return 0;
}

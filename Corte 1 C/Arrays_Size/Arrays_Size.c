#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int myNumbers[] = {10, 25, 50, 75, 100};
	
	printf("%zu\n", sizeof(myNumbers));
	
	int myNumber[] = {10, 25, 50,75, 100};
	int length = sizeof(myNumber) / sizeof(myNumber[0]);
	
	printf("%d\n", length);
	
	double myValues[] = {1.1, 2.2, 3.3};
	int lengths = sizeof(myValues) / sizeof(myValues[0]);
	
	printf("%d", lengths);	
	
	return 0;
}


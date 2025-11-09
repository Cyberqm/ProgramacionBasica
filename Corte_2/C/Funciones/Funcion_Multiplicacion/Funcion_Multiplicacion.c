#include <stdio.h>
#include <stdlib.h>

int enterValue (char *msg) {
	
	int value;
	
	printf("%s", msg);
	scanf("%d", &value);
	
	return value;
	
}

int multi (int a, int b) {
	
	int r = a * b;
	
	return r;
	
}

void showResult (int r) {
	
	printf("Result = %d\n", r);
	
}

void main() {
	
	int operand1, operand2, result;
	
	operand1 = enterValue ("Enter the first value:\n");
	operand2 = enterValue ("Enter the second value:\n");
	
	result = multi(operand1, operand2);
	
	showResult(result);
	
}
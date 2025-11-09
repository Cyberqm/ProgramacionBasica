#include <stdio.h>
#include <stdlib.h>

int enterValue (char *msg) {
	
	int value;
	
	printf("%s", msg);
	scanf("%d", &value);
	
	return value;
	
}

float divi (float a, float b) {
	
	float r = a / b;
	
	return r;
	
}

void showResult (float r) {
	
	printf("Result = %.2f\n", r);
	
}

void main() {
	
	float operand1, operand2, result;
	
	operand1 = enterValue ("Enter the first value:\n");
	operand2 = enterValue ("Enter the second value:\n");
	
	result = divi(operand1, operand2);
	
	showResult(result);
	
}
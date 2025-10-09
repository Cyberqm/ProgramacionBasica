#include <stdio.h>
#include <stdlib.h>

int a,b,r;

int main() {
	
	a = 25;
	b = 63;
	r= a+b;
	
	printf("The result of adding %d and %d is: %d\n", a, b, r);
	
	if(r == 88){
		
		printf("The result %d is equivalent to 88.\n", r);	
	}
	
	else{
		
		printf("The result %d is NOT equal to 88.\n", r);
		
		if(r<88){
			
			printf("The result %d is less than 88.", r);	
		}
		
		else{
			
			printf("The result %d is more than 88.", r);
		}
		
	}
	
	return 0;
}

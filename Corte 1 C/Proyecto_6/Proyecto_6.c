#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i = 0;
	
	inicio:
		
		if(i<10){
			
			printf("i = %d\n", i);
			
			i++;
			
			goto inicio;
			
		}
	
	return 0;
}

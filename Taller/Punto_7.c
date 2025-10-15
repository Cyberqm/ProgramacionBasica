#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nota;
	
	printf("Ingrese la nota del examen (0 a 10): ");
	scanf("%d", &nota);
	
	if (nota < 0 || nota > 10){
		
		printf("Error la nota debe estar entre 0 y 10.\n");
		
	}
	
	else {
		
		if (nota <= 4) {
			
			printf("Calificacion: Suspenso.\n");
			
		}
		
		else if (nota >= 5 && nota <7) {
			
			printf("Calificacion: Aprobado.\n");
			
		}
		
		else if (nota >=7 && nota <9) {
			
			printf("Calificacion: Notable.\n");
			
		}
		
		else if (nota >=9 && nota <10) {
			
			printf("Calificacion: Sobresaliente.\n");
			
		}
		
		else if (nota == 10) {
			
			printf("Califacion: Matricula de Honor");
			
		}
	}
	
	return 0;
	
}
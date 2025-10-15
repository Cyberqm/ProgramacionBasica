#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int dia, mes;
	int diaMes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	char opcion;
	
	do {
		
	printf("Ingrese el dia de nacimiento: ");
	scanf("%d", &dia);
	
	printf("Ingrese el mes de nacimiento: ");
	scanf("%d", &mes);
	
	if (mes < 1 || mes > 12) {
		
		printf("Mes invalido. Debe ser un numero entre 1 y 12.\n");
		
		return 0;
		
	}
	
	if (dia < 1 || dia > diaMes[mes]) {
		
		printf("Dia invalido. Ingrese un numero entre 1 y %d.\n", mes, diaMes[mes]);
		
		return 0;
		
	}
	
	if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
		
		printf("Tu signo es: Aries.\n");
		
		
	} else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
		
		printf("Tu signo es: Tauro.\n");
		
		
	} else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
		
		printf("Tu signo es: Geminis.\n");
		
		
	} else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
		
		printf("Tu signo es: Cancer.\n");
		
		
	} else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
		
		printf("Tu signo es: Leo.\n");
		
		
	} else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
		
		printf("Tu signo es: Virgo.\n");
		
		
	} else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
		
		printf("Tu signo es: Libra.\n");
		
		
	} else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
		
		printf("Tu signo es: Escorpio.\n");
		
		
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
   	
   	    printf("Tu signo es: Sagitario.\n");
   	    
   	    
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
   	    
   	    printf("Tu signo es: Capricornio.\n");
   	    
   	    
   	} else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
   		
   		printf("Tu signo es: Acuario.\n");
   		
   	 	
	} else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
		
		printf("Tu signo es: Piscis.\n");
		
		
	} else {
		
		printf("No se puede determinar el signo zodiacal. Vuelve a ingresar la fecha indicada.\n");
	}
	
   
   
   printf("\nDesea ingresar otra fecha? (Y/N): ");
   scanf(" %c", &opcion);
   
   } while (opcion == 'Y' || opcion == 'y');
  	
	return 0;
}
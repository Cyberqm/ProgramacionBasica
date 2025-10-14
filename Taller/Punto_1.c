#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int opcion;
	float lado, base, altura, radio;
	float area, perimetro;
	char continuar;
	const float PI = 3.14159265f;
	
	do{
		printf("\n=== Calculo de Area y Perimetro ===\n");
		printf("1 - Cuadrado\n");
		printf("2 - Rectangulo\n");
		printf("3 - Triangulo\n");
		printf("4 - Circulo\n");
		printf("Elija una figura (1-4):\n");
		scanf("%d", &opcion);
		
		
		switch(opcion){
			
			case 1: 
			
			    printf("Ingrese el lado del cuadrado: ");
			    scanf("%f", &lado);
			
			    area = lado * lado;
			
			    perimetro = 4 * lado;
			
			    break;
			
			case 2:
				
				printf("Ingrese la base del rectangulo: ");
				scanf("%f", &base);
				printf("Ingrese la altura del rectangulo: ");
				scanf("%f", &altura);
				
				area = base * altura;
				
				perimetro = 2 * (base + altura);
				
				break;
				
			case 3:
				
				printf("Ingrese la base del triangulo: ");
				scanf("%f", &base);
				printf("Ingrese la altura del triangulo: ");
				scanf("%f", &altura);
				float lado1, lado2, lado3;
				printf("Ingrese el lado 1: ");
				scanf("%f", &lado1);
				printf("Ingrese el lado 2: ");
				scanf("%f", &lado2);
				printf("Ingrese el lado 3: ");
				scanf("%f", &lado3);
				
				area = base * altura / 2;
				
				perimetro = lado1+lado2+lado3;
				
				break;
				
			case 4:
				
				printf("Ingrese el radio del circulo: ");
				scanf("%f", &radio);
				
				area = PI * radio * radio;
				
				perimetro = 2 * PI * radio;
				
				break;
				
			default:
			    
			    printf("Opcion no valida.\n");
			    
			    continue;
			}
			
			printf("\nResultados\n");
			printf("\n Area: %.2f\n", area);
			printf("\ Perimetro: %.2f\n", perimetro);
			
			
			
			printf("\nDesea calcula otra figura? (Y/N): ");
			scanf(" %c", &continuar);
		
	} while (continuar == 'y' || continuar == 'Y');
	
	printf("\nPrograma finalizado.\n");
	
	return 0;
}
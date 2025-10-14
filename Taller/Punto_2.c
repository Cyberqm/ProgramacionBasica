#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre[30];
	float precio;
	int cantidad;
	float total;
	
	printf("Ingrese nombre del producto: ");
	scanf("%s", &nombre);
	
	printf("Ingrese el precio por unidad: ");
	scanf("%f", &precio);
	
	printf("Ingrese la cantidad de unidades: ");
	scanf("%d", &cantidad);
	
	total = precio * cantidad;
	
	printf("Producto: %s\n", nombre);
	printf("Unidades: %d\n", cantidad);
	printf("Precio unitario: %.2f\n", precio);
	printf("Total a pagar: %.2f\n", total);
	
	
	return 0;
}
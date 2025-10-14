#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nombre[30];
	float horas;
	float valorHora;
	float sueldoBruto;
	float retencion;
	float sueldoNeto;
	
	printf("Ingresar nombre del trabajador: ");
	scanf("%s", nombre);
	
	printf("Ingresar horas trabajadas: ");
	scanf("%f", &horas);
	
	printf("Ingresar valor por hora: ");
	scanf("%f", &valorHora);
	
	sueldoBruto = horas * valorHora;
	
	retencion = sueldoBruto * 0.05;
	
	sueldoNeto = sueldoBruto - retencion;
	
	printf("\n=== Sueldo del trabajador ===\n");
	printf("Nombre: %s\n", nombre);
	printf("Horas trabajadas: %.2f\n", horas);
	printf("Valor por hora trabajada: %.2f\n", valorHora);
	printf("Sueldo Bruto: %.2f\n", sueldoBruto);
	printf("Retencion: %.2f\n", retencion);
	printf("Sueldo Neto: %.2f\n", sueldoNeto);
	
	return 0;
}

#include <stdio.h>

// Decimal -> Binario

void decbin(long num) {
	
    if (num < 0) { printf("-"); num = -num; }
    if (num == 0) { printf("0"); return; }

    int bits[64], i = 0;
    while (num > 0) bits[i++] = num % 2, num /= 2;
    while (i > 0) printf("%d", bits[--i]);
}

// Decimal -> Octal

void decoct(long num) {
	
    if (num < 0) { printf("-"); num = -num; }
    if (num == 0) { printf("0"); return; }

    int digi[64], i = 0;
    while (num > 0) digi[i++] = num % 8, num /= 8;
    while (i > 0) printf("%d", digi[--i]);
}

// Decimal -> Hexadecimal

void dechex(long num) {
	
    if (num < 0) { printf("-"); num = -num; }
    if (num == 0) { printf("0"); return; }

    char h[64];
    int i = 0, rest;
    while (num > 0) {
        rest = num % 16;
        h[i++] = (rest < 10) ? '0' + rest : 'A' + (rest - 10);
        num /= 16;
    }
    while (i > 0) printf("%c", h[--i]);
}

// Binario -> Decimal

long bindec(void) {
	
    printf("Ingresa numero binario: ");

    long deci = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == '0') deci *= 2;
        else if (c == '1') deci = deci * 2 + 1;
        else if (c != ' ' && c != '\t') {
            printf("\nError: solo 0 y 1\n");
            while ((c = getchar()) != '\n' && c != EOF);
            return -1;
            
        }
        
    }
    
    return deci;
}

// Hexadecimal -> Decimal

long hexdec(void) {
	
    printf("Ingresa numero hexadecimal (sin 0x): ");

    long deci = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        deci *= 16;
        if (c >= '0' && c <= '9') deci += c - '0';
        else if (c >= 'A' && c <= 'F') deci += c - 'A' + 10;
        else if (c >= 'a' && c <= 'f') deci += c - 'a' + 10;
        else if (c != ' ' && c != '\t') {
            printf("\nHex invalido: %c\n", c);
            while ((c = getchar()) != '\n' && c != EOF);
            return -1;
        }
    }
    return deci;
}

// Menu principal

int main() {
	
    int opc;
    long num;

    do {
        printf("\n====================================\n");
        printf("    CALCULADORA DE BASES\n");
        printf("====================================\n");
        printf("1. Decimal -> Binario\n");
        printf("2. Decimal -> Octal\n");
        printf("3. Decimal -> Hexadecimal\n");
        printf("4. Binario -> Decimal\n");
        printf("5. Hexadecimal -> Decimal\n");
        printf("6. Salir\n");
        printf("\nElige una opcion: ");

        scanf("%d", &opc);
        while (getchar() != '\n');

        switch (opc) {
            case 1:
                printf("Numero decimal: ");
                scanf("%ld", &num);
                while (getchar() != '\n');
                printf("Binario = ");
                decbin(num);
                printf("\n");
                break;

            case 2:
                printf("Numero decimal: ");
                scanf("%ld", &num);
                while (getchar() != '\n');
                printf("Octal = ");
                decoct(num);
                printf("\n");
                break;

            case 3:
                printf("Numero decimal: ");
                scanf("%ld", &num);
                while (getchar() != '\n');
                printf("Hexadecimal = 0x");
                dechex(num);
                printf("\n");
                break;

            case 4:
                num = bindec();
                if (num != -1) printf("Decimal = %ld\n", num);
                break;

            case 5:
                num = hexdec();
                if (num != -1) printf("Decimal = %ld\n", num);
                break;

            case 6:
                printf("\nPrograma finalizado. Nos vemos!\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

        if (opc != 6) {
            printf("\nPresiona ENTER para continuar...");
            getchar();
            
        }
        
    } while (opc != 6);

    return 0;
}


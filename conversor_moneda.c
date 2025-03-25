#include<stdio.h>

int main() {

        float quetzales, dolares, euros;
    int opcion;

    printf("Conversor de monedas\n");
    printf("1. Quetzales a dólares\n");
    printf("2. Dólares a quetzales\n");
    printf("3. Quetzales a euros\n");
    printf("4. Euros a quetzales\n");
    printf("5. Salir\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad de quetzales: ");
            scanf("%f", &quetzales);
            dolares = quetzales / 7.5; // tipo de cambio aproximado
            printf("%.2f quetzales son %.2f dólares\n", quetzales, dolares);
            break;
        case 2:
 printf("Ingrese la cantidad de dólares: ");
            scanf("%f", &dolares);
            quetzales = dolares * 7.5; // tipo de cambio aproximado
            printf("%.2f dólares son %.2f quetzales\n", dolares, quetzales);
            break;
        case 3:
            printf("Ingrese la cantidad de quetzales: ");
            scanf("%f", &quetzales);
            euros = quetzales / 8.5; // tipo de cambio aproximado
            printf("%.2f quetzales son %.2f euros\n", quetzales, euros);
            break;
        case 4:
            printf("Ingrese la cantidad de euros: ");
            scanf("%f", &euros);
            quetzales = euros * 8.5; // tipo de cambio aproximado
            printf("%.2f euros son %.2f quetzales\n", euros, quetzales);
            break;
case 5:
            printf("Adiós\n");
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}


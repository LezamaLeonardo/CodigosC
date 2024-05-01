#include <stdio.h>

int main() {
    int opcion;
    float base,altura,lado1,lado2,baseMenor;

    printf("CALCULO DE AREAS\n");
    printf("1- Calcular el area de un triangulo\n");
    printf("2- Calcular el area de un trapecio\n");
    printf("3- Calcular el area de un rectangulo\n");
    printf("QUE AREA DESEA CALCULAR?: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Introduce la base del triangulo: ");
            scanf("%f", &base);
            printf("Introduce la altura del triangulo: ");
            scanf("%f", &altura);
            printf("El area del triangulo es: %.2f\n", (base * altura) / 2);
            break;
        case 2:
            printf("Introduce la base mayor del trapecio: ");
            scanf("%f", &base);
            printf("Introduce la base menor del trapecio: ");
            scanf("%f", &baseMenor);
            printf("Introduce la altura del trapecio: ");
            scanf("%f", &altura);
            printf("El area del trapecio es: %.2f\n", ((base + baseMenor) * altura) / 2);
            break;
        case 3:
            printf("Introduce la base del rectangulo: ");
            scanf("%f", &base);
            printf("Introduce la altura del rectangulo: ");
            scanf("%f", &altura);
            printf("El area del rectangulo es: %.2f\n", base * altura);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
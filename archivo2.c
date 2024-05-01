#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, menor;

    printf("Ingresa 5 numeros:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    menor = n1;


    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }
    if (n5 < menor) {
        menor = n5;
    }

    printf("El menor numero es: %d\n", menor);

    return 0;
}
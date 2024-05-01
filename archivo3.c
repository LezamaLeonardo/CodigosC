#include <stdio.h>

int main() {
    int n1, n2, n3, t;

    printf("Ingresa 3 numeros:");
    scanf("%d %d %d", &n1, &n2, &n3);


    if (n1 < n2) {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    if (n1 < n3) {
        t = n1;
        n1 = n3;
        n3 = t;
    }
    if (n2 < n3) {
        t = n2;
        n2 = n3;
        n3 = t;
    }


    printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
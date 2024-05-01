#include<stdio.h>

int main()
{
    char letra;
    printf("Ingrese una letra:");
    scanf("%c",&letra);
    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("es una vocal");
        break;
        default:
            printf("No es una vocal");
    }
    return 0;
}
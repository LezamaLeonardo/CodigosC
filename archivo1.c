#include <stdio.h>

int main() {
    int n1,n2,n3;
    
    printf("Ingresa el primer numero: ");
    scanf("%d", &n1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &n2);
    printf("Ingresa el tercer numero: ");
    scanf("%d", &n3);

    if (n1==1 && n2==2 && n3==3) {
        printf("Acceso permitido");
    }  else {
        printf("Acceso no permitido");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void ventaProductos() {
    int cantidad;
    float precio;
    float Importe=0;

    printf("Dime la cantidad de productos: ");
    scanf("%d", &cantidad);

    while (cantidad > 0){
        if (cantidad <= 0){
            printf("La cantidad debe ser positiva\n");
            continue;
        }
        printf("Dime el precio del producto: ");
        scanf("%f", &precio);

        if (precio <= 0){
            printf("El precio debe ser positivo\n");
            continue;
        }

        Importe += cantidad * precio;
        printf("Tu importe actual es de: %.2f\n", Importe);
        printf("Dime la cantidad de productos (0 para terminar): ");
        scanf("%d", &cantidad);
    }
}

int main(){
    char usuario[20];
    char contra[20];
    int intentos=3;

    while (intentos>0){
        printf("Nombre de usuario: ");
        scanf("%s", usuario);
        printf("Contraseña: ");
        scanf("%s", contra);

        if (strcmp(usuario,"Leonardo") == 0 && strcmp(contra, "2B16") == 0 )
        {
            printf("Bienvenido al sistema\n");
            break;
        } 
        else {
            printf("Nombre o contraseña incorrectos. Intentos restantes: %d\n", --intentos);
        }
        
        if (intentos == 0){
            printf("Se ha alcanzado el número máximo de intentos\n");
            break;
        }
    }

    if (intentos > 0) {
        ventaProductos();
    }

    return 0;
}
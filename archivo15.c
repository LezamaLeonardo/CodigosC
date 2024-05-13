#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char contrasena[20];
    int intentos = 3;

    while (intentos > 0) {
        printf("Nombre de usuario: ");
        scanf("%s", usuario);
        printf("Contraseña: ");
        scanf("%s", contrasena);

        if (strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0) {
            printf("Bienvenido al sistema\n");
            break;
        } else {
            printf("Nombre de usuario o contraseña incorrectos. Intentos restantes: %d\n", --intentos);
            if (intentos == 0) {
                printf("Se ha superado el número de intentos permitido.\n");
            }
        }
    }

    return 0;
}
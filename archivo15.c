#include <stdio.h>
#include <string.h>

int main(){
    char usuario[20];
    char contra[20];
    int intentos=3;


    while (intentos>0){
        printf("nombre de usuario: ");
        scanf("%s", usuario);
        printf("Contrasena: ");
        scanf("%s",contra);

        if (strcmp(usuario,"Leonardo") == 0 && strcmp(contra, "2B16") == 0 )
        {
            printf("Bienvenido al sistema");
            
            break;
            } else {
                printf("Nombre o contrasena incorrectos. Intentos restantes: %d/n", --intentos);

                int cantidad;
                float precio;
                float Importe=0;

                printf("dime la cantidad de productos");
                scanf("%d",&cantidad);
                while(cantidad>0){
                    if (cantidad<=0){
                        printf("el precio debe ser positivo");
                        continue;
                    }
                    printf("dime el precio de productos");
                    scanf("%f",&precio);
                    while(cantidad>0){
                        if (cantidad<=0){
                            printf("el precio debe ser positivo");
                            continue;
                            }
                            Importe=cantidad+precio;
                            printf("tu importe es de: %f" , Importe );

                }


                if (intentos == 0){
                    printf("se ha alcanzado el numero maximo de intentos");

                }
            }

    }
    
    
    
    return 0;
}
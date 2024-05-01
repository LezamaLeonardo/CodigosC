#include <stdio.h>

int main() {
    float h, p, s;

 
    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &h);
    printf("Ingrese el precio por hora: ");
    scanf("%f", &p);

    s=h*p;
    
    if (h>40) {
        if (h<=50) {
            s+=(h-40)*p*0.5;
        } else {
            s+=10*p*0.5+(h-50)*p;
        }
    }

    printf("El salario semanal es: %.2f\n", s);

    return 0;
}
#include <stdio.h>

int main(){
 int num, menor, mayor;
 int cont;
 int sum=0;
 menor=0;
 mayor=0;

printf("Ingrese 10 numeros enteros:");

scanf("%d", &num);

menor= num;

mayor = num;

sum+=num

for (int cont= 1; cont < 10; cont++) {

scanf("%d", &num);

sum+=num;

if (num < menor) {

menor = num;}

if (num > mayor) {

mayor=num;}

}

printf("El numero menor es: %d\n", menor);

printf("la suma de los numero es: %d\n",sum);

printf("El numero mayor es: %d\n", mayor);

return 0;

}
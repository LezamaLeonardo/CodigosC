#include<stdio.h>

int main()
{
    int a;
    int acum=0;
    int s=0;
    printf("introduce un número");
    scanf("%d",&a);
    while(a>0)
    {
    s+=a;
    acum++;
    printf("anota un numero");
    scanf("%d",&a);
    
    }
    printf("tu cantidad de num ingresados es: %d\n", acum);
    printf("se ingresaron un total de %d números \n ", s);
    
    return 0;
}
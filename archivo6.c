#include <stdio.h>

int main() {
    int c;
    printf("dime el numero de tu carta: ");
    scanf("%d", &c);
    if(c==1){
        printf("es un As");
    }
    else if(c==10){
        printf("es un sota");
    }
    else if(c==11){
        printf("es un caballo");
    }
    else if(c==12){
        printf("es un rey");
    }
    else if(c>2 && c<9){
        printf("no es ninguna figura en la baraja española");
    }
    else printf("no es ninguna carta en una baraja española");
    

    return 0;
}
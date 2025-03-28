#include <stdio.h>
#include <stdlib.h>


int main (){

    int x,z;
    float y;
    //leitura do valor do inteiro 
    scanf("%d %d", &x, &z);
    //leitura do valor do float 
    scanf("%f", &y);


    printf("====================================\n");
    printf("valor de x e z: %d e %d\n", x, z);
    printf("valor de y: %f\n", y);
    printf("====================================\n");

    system("pause");
    return 0;
}
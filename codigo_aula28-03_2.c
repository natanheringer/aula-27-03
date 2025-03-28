#include <stdlib.h>
#include <stdio.h>

//tipos de saida %c para char, %d para int, %f para float, %lf para double


int main (){

//valor de 125 
int a = 125;
//valor octal de 435 
int b = 0435;
//valor hexadecimal de 506
int c = 0x1FA;

//imprime os valores de a, b e c 
printf("valor de a: %d\n", a);
printf("valor de b: %d\n", b);
printf("valor de c: %d\n", c);

//pausa o sistema e fecha o programa 
system("pause");
return 0;


}
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h> // Add this line to include the string.h header file

char resposta1[] = "s"; // Change the data type of 'resposta1' from char to char[]
char resposta2[] = "n";
char replica;

int main (){
    //adiciona caracteres de acentuação
    SetConsoleOutputCP(CP_UTF8);
    
    //referencia o idioma local
    setlocale(LC_ALL, "pt.br.UTF-8");

    //imprime a mensagem na tela 
    printf("\n Olá, Mundo! \n");
    printf("\n Tudo Bem? \n Responda com (s) para sim ou (n) para não: \n");
    scanf("%s", resposta1); // Remove the second argument from the scanf function call
    scanf("%s", resposta2); 

    if(strcmp(resposta1, "s") == 0 || strcmp(resposta2, "n") == 0){
        scanf(" %c", &replica); // Add this line to read the user's response into 'replica'
        switch(replica){
            case 's':
                printf("\n Que bom!");
                break;

            case 'n':
                printf("\n Que pena, melhore!");
                break;
            default:
                printf("\n resposta inválida!");
                break;
        
        }
        
    }else {
        return 0;
    }
}

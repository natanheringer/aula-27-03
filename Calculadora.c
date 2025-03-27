#include <stdio.h> 
#include <locale.h>
#include <windows.h>

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");


    char operator;
    double num1, num2, resultado;
    int continuar;

    do {
    //APRESENTAÇÃO
    printf("=============================\n");
    printf(" CALCULADORA SIMPLES\n");
    printf("=============================\n");


    // Exibe as opções para o usuário
    printf("\nescolha a operação (+, -, *, /): ");
    scanf(" %c", &operator); 
    
  



    // Solicita e armazena os números escolhidos
    printf("Digite o primeiro número: ");
    if (scanf(" %lf", &num1) !=1) {
        printf("Erro: número inválido!\n");
        return 1;
    }

    printf("digite o segundo número: ");
    if (scanf(" %lf", &num2) !=1) {
        printf("Erro: número inválido!\n");
        return 1;
    }

    //depuração
    //printf("DEBUG: Operação: %c, num1: %.2lf, num2: %.2lf\n", operator, num1, num2);

    // Realiza as operações lógicas da calculadora 
    switch (operator) {

        case '+':
            resultado = num1 + num2;
                break;
        
        case '-':
            resultado = num1 - num2;
                break;

        case '*':
            resultado = num1 * num2;
                break;
        
        case '/':
             if(num2 == 0)  {
                
                
                    printf("Erro: não se divide números por 0!\n");
                    return 1; //encerra o programa com erros.

             }
                
            resultado = num1 / num2;
            break;

        default: 
                printf("operação inválida!\n");
                return 1; 
        
    }
    printf("\n=====================\n");
    printf("Resultado: %.2lf", resultado);
    printf("\n=====================\n");
    //reiniciar a operação
    printf("\nDeseja realizar outra operação? (1 - sim, 0 - não)");
    scanf("%d", &continuar);

} while (continuar == 1);

   if(continuar == 0){
    printf("Desligando a calculadora...\n");
    Sleep(4000);
    printf("\nCalculadora desligada");
    Sleep(2000);
   }

   return 0;
}
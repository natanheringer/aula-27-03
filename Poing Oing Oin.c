#include <stdio.h>
#include <locale.h>
#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#else
#endif
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

#define SCREEN_WIDTH 40 //define a largura da tela
#define SCREEN_HEIGHT 20 //define a altura da tela 

//posições iniciais dos jogadores 
int jogador1Y = SCREEN_HEIGHT / 2;
int jogador2Y = SCREEN_HEIGHT / 2;
int bolaX = SCREEN_WIDTH / 2;
int bolaY = SCREEN_HEIGHT / 2;
int direcao_bolaX = 1; //direção horizontal inicial da bola (1 para direita, -1 para esquerda)
int direcao_bolaY = 1; //direção vertical inicial da bola (1 para baixo, -1 para cima)   

//posição dos jogadores 
int pontosJogador1 = 0;
int pontosJogador2 = 0;

//nome dos jogadores 
char jogadorNOME1[20];
char jogadorNOME2[20];

//quem vai pontuar, ou tocou a bola por ultimo 
int jogadorPONTUA = 0; 

void gotoxy(int x, int y);
void draw();
void updateBola();
#ifdef _WIN32
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#else
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y + 1, x + 1);
}
#endif

void draw() {
    //placar do jogo 
    printf("%s: %d\t\t%s: %d\n", jogadorNOME1, pontosJogador1, jogadorNOME2, pontosJogador2);

    //desenha a borda superior 
    for (int i = 0; i < SCREEN_WIDTH; i++) {
        printf("-");
    }
    printf("\n");

    //desenha a tela do jogo 
    for (int y = 0; y < SCREEN_HEIGHT; y++) { 
        for (int x = 0; x < SCREEN_WIDTH; x++) { 
            if (x == 0 || x == SCREEN_WIDTH - 1) {
                printf("|"); // Paredes laterais
            } 
            
            //desenha jogador 1 
            else if (x == 1 && y >= jogador1Y - 2 && y <= jogador1Y + 2) {
                printf("|");//jogador 1
            }
            //desenha jogador 2
            else if (x == SCREEN_WIDTH - 2 && y >= jogador2Y - 2 && y <= jogador2Y + 2){
                printf("|");//jogador 2
            }
            //desenha a bola 
            else if (x == bolaX && y == bolaY){
                printf("O");//bola 
            }
            else {
                printf(" "); // Espaço vazio
            }
        }
        printf("\n");
    }
     
    //desenha a borda inferior 
    for(int i = 0; i < SCREEN_WIDTH; i++){
        printf("-");
    }
    printf("\n");
}

void resetBola(int direcao) {
    bolaX = SCREEN_WIDTH / 2;
    bolaY = SCREEN_HEIGHT / 2;
    direcao_bolaX = direcao; 
    direcao_bolaY = (rand() % 2 == 0) ? 1 : -1;
}

void updateBola() {
    //atualiza a posição da bola
    bolaX += direcao_bolaX;
    bolaY += direcao_bolaY;

    //rebate a bola nas bordas superiores e inferiores 
    if(bolaY <= 0 || bolaY >= SCREEN_HEIGHT-1) {
        direcao_bolaY = -direcao_bolaY;
    }

    //rebate a bola nos jogadores 
    if(bolaX == 2 && bolaY >= jogador1Y - 2 && bolaY <= jogador1Y + 2) {
        direcao_bolaX = -direcao_bolaX;
        jogadorPONTUA = 1;
    }

    if(bolaX == SCREEN_WIDTH - 3 && bolaY >= jogador2Y - 2 && bolaY <= jogador2Y + 2) {
        direcao_bolaX = -direcao_bolaX;
        jogadorPONTUA = 2;
    }

    //verifica se a bola saiu da tela e o jogador pontuou 
    if (bolaX < 0) {
        pontosJogador2++;
        resetBola(1);
    }

    if (bolaX >= SCREEN_WIDTH) {
        pontosJogador1++;
        resetBola(-1);
    }
}

void moveJogador1(char input) {
    if (input == 'w' && jogador1Y > 2) {
        jogador1Y--;
    }
    if (input == 's' && jogador1Y < SCREEN_HEIGHT - 3) {
        jogador1Y++;
    }
}

void moveJogador2(char input) {
    if (input == 'i' && jogador2Y > 2) {
        jogador2Y--;
    }
    if (input == 'k' && jogador2Y < SCREEN_HEIGHT - 3) {
        jogador2Y++;
    }
}

//tela de inicio 
void tituloInicio() {
    gotoxy(0, 0);
    printf("\n======================\n");
    printf("     PING XONG      ");
    printf("\n======================\n");

    //TELA PARA INICIAR 
    printf("\nPressione ENTER para jogar!\n");
}

//função que pede o nome dos jogadores
void nomes() {
    //pede e busca o nome do jogador 1    
    printf("Nome Jogador 1: ");
    fgets(jogadorNOME1, 20, stdin);

    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif
    jogadorNOME1[strcspn(jogadorNOME1, "\n")] = 0;

    //pede e busca o nome do jogador 2
    printf("Nome Jogador 2: ");
    fgets(jogadorNOME2, 20, stdin);

    //remove o \n no final do nome 
    jogadorNOME2[strcspn(jogadorNOME2, "\n")] = 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    char input; 

    tituloInicio();
    nomes();

    // Wait for Enter key to start the game
    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == 13) { //codigo do enter = 13
                break;
            }
        }
    }

    // Main game loop
    while (1) {
        gotoxy(0, 0);
        draw(); //desenha a tela do jogo 
        updateBola(); //atualiza posição da bola 

        if (_kbhit()) { 
            input = _getch();
            if (input == '0') {
                break;
            }

            //movimentação dos jogadores 
            moveJogador1(input);
            moveJogador2(input);
        }
        Sleep(40);
    }
    return 0;
}

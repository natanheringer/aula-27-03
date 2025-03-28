#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>






//urna eletronica com 5 candidatos 
//cada candidato tem um número e um nome 
//o usuário pode votar em um candidato ou votar nulo 
//ao final da votação, o programa deve exibir o total de votos dos candidatos
//e o total de votos nulos 


void displayCandidato1();
void displayCandidato2();
void displayCandidato3();
void displayCandidato4();
void displayCandidato5();




int main (){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int candi_num1 = 0, candi_num2 = 0, candi_num3 = 0, candi_num4 = 0, candi_num5 = 0;
    int voto, voto_nulo = 0;
    int total_votos = 0; //total_votos_nulos = 0;
    //o [30] é o tamanho máximo de caracteres que o candidato pode ter no nome
    char candi_nome1[30] = "bananinha"; 
    char candi_nome2[30] = "fandangos"; 
    char candi_nome3[30] = "trouxa";
    char candi_nome4[30] = "lisa simpson"; 
    char candi_nome5[30] = "francis black";

    do {
        printf ("=============================\n");
        printf ("URNA ELETRÔNICA\n");
        printf ("=============================\n");
        

        Sleep(2000); 

        printf ("1 - %s\n", candi_nome1);
        printf ("2 - %s\n", candi_nome2);
        printf ("3 - %s\n", candi_nome3);
        printf ("4 - %s\n", candi_nome4);
        printf ("5 - %s\n", candi_nome5);
        printf ("0 - Voto Nulo\n");
        printf ("9 - ver resultados\n");
        printf ("Digite o número do candidato: ");
        scanf("%d", &voto);
        
        if (voto == -1){
            break;
        }

        switch (voto){
            case 1:
                candi_num1++;
                displayCandidato1();
                total_votos++;
                break;
            case 2:
                candi_num2++;
                displayCandidato2();
                total_votos++;
                break;
            case 3:
                candi_num3++;
                displayCandidato3();
                total_votos++;
                break;
            case 4:
                candi_num4++;
                displayCandidato4();
                total_votos++;
                break;
            case 5:
                candi_num5++;
                displayCandidato5();
                total_votos++;
                break;
            case 0:
                voto_nulo++;
                printf("Voto nulo registrado\n");
                total_votos++;
                break;
            case 9:
            printf("\nResultado da eleição: \n");
            printf("%s: %d votos\n", candi_nome1, candi_num1);
            printf("%s: %d votos\n", candi_nome2, candi_num2);
            printf("%s: %d votos\n", candi_nome3, candi_num3);
            printf("%s: %d votos\n", candi_nome4, candi_num4);
            printf("%s: %d votos\n", candi_nome5, candi_num5);
            printf("Votos nulos: %d\n", voto_nulo);
            printf("Total de votos: %d\n", total_votos);
            break;
            
            
            default:
                printf("Voto inválido\n");
                break;
        }

    

}while(1);
    

return 0;
}


//função para exibir os candidatos com ascii art

void displayCandidato1(){

printf("PPPGBGGGGGGGGGBBBBBBBBBGGGGBGGGGGGGPPPPP\n");
printf("PPPGGGPGGGGGGBGBBGGBGGGBGBGGGGGPGPPPPPP5\n");
printf("PGGGGGGGGGGGGGGGBBBBBGGGGGGGPGGPPPPPPPPP\n");
printf("GGGGBBGGGGGGGGGGB#B#BBBGGGGGGPPPPPPPPPPP\n");
printf("GGGGBBGGGGGGGGPJJ??J??JG#GPGPPPPP55PPPPP\n");
printf("PPPGBGBGGGGBGJ^^~~~^^^~7GBBGPP55555555PP\n");
printf("PPPPGGBGGGGG5^^~~~~~~~~!JPBPPP55555Y5PGG\n");
printf("PPPGGGGGGGGGY7Y5J!?55Y?!!7Y5PPPPP55Y5PGP\n");
printf("PPPGGGGGGGGG5!!?7!!77!!!!77YPP5555YY5PPP\n");
printf("PPGGGGGGGBBGB7^!!!!!!~~77!?PPP55555YY5PP\n");
printf("PPGGGGGGGBBBBY^!7?7!!!!77J5PPP555555YPP5\n");
printf("PPPGGGGPPGBGGGJ!!?7!7777!7PPP55555555PP5\n");
printf("55PGGGPPPGGGGGP!!??77!^::J#BPPP555PP5555\n");
printf("PPPPGGGGPPPGGY:::^^^:^^^Y#&&#BBGPPP55555\n");
printf("PPPPGGGGGGBBBG~!7~^^^^^Y####&#&###BBGPP5\n");
printf("PPPPGGBBBB#&#YYYY!^^:~P#&##B#B#######BBG\n");
printf("PGGGGBB##B##Y!JY5J^:~G&###BGBBB###B##BBB\n");
printf("GGGGBBBBB#&5!!7JY5J!B@&&&#BGB#&&########\n");
printf("GGGG#BBPB#G?!7?7?YP#@&&&&#B#&@@&&&&####&\n");
printf("PGGBBGGG#B5J?????5#@#&&&&&&@@&@&#&&&&&&&\n");
printf("PGGBBGPGBJYYJJ???B@@&&#&&@@@@@@@&&&&&&##\n");
printf("PGGBBGG#G!Y555J7G&@@&&&&@@@@@@@@&&#&&&#&\n");
printf("GGG#BB&&P!7J5PPG&@@@@@@@@@@@@&@@@&&&&&&&\n");


}

void displayCandidato2(){

    printf("PPPGBGGGGGGGGGBBBBBBBBBGGGGBGGGGGGGPPPPP\n");
    printf("PPPGGGPGGGGGGBGBBGGBGGGBGBGGGGGPGPPPPPP5\n");
    printf("PGGGGGGGGGGGGGGGBBBBBGGGGGGGPGGPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGGGB#B#BBBGGGGGGPPPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGPJJ??J??JG#GPGPPPPP55PPPPP\n");
    printf("PPPGBGBGGGGBGJ^^~~~^^^~7GBBGPP55555555PP\n");
    printf("PPPPGGBGGGGG5^^~~~~~~~~!JPBPPP55555Y5PGG\n");
    printf("PPPGGGGGGGGGY7Y5J!?55Y?!!7Y5PPPPP55Y5PGP\n");
    printf("PPPGGGGGGGGG5!!?7!!77!!!!77YPP5555YY5PPP\n");
    printf("PPGGGGGGGBBGB7^!!!!!!~~77!?PPP55555YY5PP\n");
    printf("PPGGGGGGGBBBBY^!7?7!!!!77J5PPP555555YPP5\n");
    printf("PPPGGGGPPGBGGGJ!!?7!7777!7PPP55555555PP5\n");
    printf("55PGGGPPPGGGGGP!!??77!^::J#BPPP555PP5555\n");
    printf("PPPPGGGGPPPGGY:::^^^:^^^Y#&&#BBGPPP55555\n");
    printf("PPPPGGGGGGBBBG~!7~^^^^^Y####&#&###BBGPP5\n");
    printf("PPPPGGBBBB#&#YYYY!^^:~P#&##B#B#######BBG\n");
    printf("PGGGGBB##B##Y!JY5J^:~G&###BGBBB###B##BBB\n");
    printf("GGGGBBBBB#&5!!7JY5J!B@&&&#BGB#&&########\n");
    printf("GGGG#BBPB#G?!7?7?YP#@&&&&#B#&@@&&&&####&\n");
    printf("PGGBBGGG#B5J?????5#@#&&&&&&@@&@&#&&&&&&&\n");
    printf("PGGBBGPGBJYYJJ???B@@&&#&&@@@@@@@&&&&&&##\n");
    printf("PGGBBGG#G!Y555J7G&@@&&&&@@@@@@@@&&#&&&#&\n");
    printf("GGG#BB&&P!7J5PPG&@@@@@@@@@@@@&@@@&&&&&&&\n");

}

void displayCandidato3(){

    printf("PPPGBGGGGGGGGGBBBBBBBBBGGGGBGGGGGGGPPPPP\n");
    printf("PPPGGGPGGGGGGBGBBGGBGGGBGBGGGGGPGPPPPPP5\n");
    printf("PGGGGGGGGGGGGGGGBBBBBGGGGGGGPGGPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGGGB#B#BBBGGGGGGPPPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGPJJ??J??JG#GPGPPPPP55PPPPP\n");
    printf("PPPGBGBGGGGBGJ^^~~~^^^~7GBBGPP55555555PP\n");
    printf("PPPPGGBGGGGG5^^~~~~~~~~!JPBPPP55555Y5PGG\n");
    printf("PPPGGGGGGGGGY7Y5J!?55Y?!!7Y5PPPPP55Y5PGP\n");
    printf("PPPGGGGGGGGG5!!?7!!77!!!!77YPP5555YY5PPP\n");
    printf("PPGGGGGGGBBGB7^!!!!!!~~77!?PPP55555YY5PP\n");
    printf("PPGGGGGGGBBBBY^!7?7!!!!77J5PPP555555YPP5\n");
    printf("PPPGGGGPPGBGGGJ!!?7!7777!7PPP55555555PP5\n");
    printf("55PGGGPPPGGGGGP!!??77!^::J#BPPP555PP5555\n");
    printf("PPPPGGGGPPPGGY:::^^^:^^^Y#&&#BBGPPP55555\n");
    printf("PPPPGGGGGGBBBG~!7~^^^^^Y####&#&###BBGPP5\n");
    printf("PPPPGGBBBB#&#YYYY!^^:~P#&##B#B#######BBG\n");
    printf("PGGGGBB##B##Y!JY5J^:~G&###BGBBB###B##BBB\n");
    printf("GGGGBBBBB#&5!!7JY5J!B@&&&#BGB#&&########\n");
    printf("GGGG#BBPB#G?!7?7?YP#@&&&&#B#&@@&&&&####&\n");
    printf("PGGBBGGG#B5J?????5#@#&&&&&&@@&@&#&&&&&&&\n");
    printf("PGGBBGPGBJYYJJ???B@@&&#&&@@@@@@@&&&&&&##\n");
    printf("PGGBBGG#G!Y555J7G&@@&&&&@@@@@@@@&&#&&&#&\n");
    printf("GGG#BB&&P!7J5PPG&@@@@@@@@@@@@&@@@&&&&&&&\n");

}

void displayCandidato4(){

    printf("PPPGBGGGGGGGGGBBBBBBBBBGGGGBGGGGGGGPPPPP\n");
    printf("PPPGGGPGGGGGGBGBBGGBGGGBGBGGGGGPGPPPPPP5\n");
    printf("PGGGGGGGGGGGGGGGBBBBBGGGGGGGPGGPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGGGB#B#BBBGGGGGGPPPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGPJJ??J??JG#GPGPPPPP55PPPPP\n");
    printf("PPPGBGBGGGGBGJ^^~~~^^^~7GBBGPP55555555PP\n");
    printf("PPPPGGBGGGGG5^^~~~~~~~~!JPBPPP55555Y5PGG\n");
    printf("PPPGGGGGGGGGY7Y5J!?55Y?!!7Y5PPPPP55Y5PGP\n");
    printf("PPPGGGGGGGGG5!!?7!!77!!!!77YPP5555YY5PPP\n");
    printf("PPGGGGGGGBBGB7^!!!!!!~~77!?PPP55555YY5PP\n");
    printf("PPGGGGGGGBBBBY^!7?7!!!!77J5PPP555555YPP5\n");
    printf("PPPGGGGPPGBGGGJ!!?7!7777!7PPP55555555PP5\n");
    printf("55PGGGPPPGGGGGP!!??77!^::J#BPPP555PP5555\n");
    printf("PPPPGGGGPPPGGY:::^^^:^^^Y#&&#BBGPPP55555\n");
    printf("PPPPGGGGGGBBBG~!7~^^^^^Y####&#&###BBGPP5\n");
    printf("PPPPGGBBBB#&#YYYY!^^:~P#&##B#B#######BBG\n");
    printf("PGGGGBB##B##Y!JY5J^:~G&###BGBBB###B##BBB\n");
    printf("GGGGBBBBB#&5!!7JY5J!B@&&&#BGB#&&########\n");
    printf("GGGG#BBPB#G?!7?7?YP#@&&&&#B#&@@&&&&####&\n");
    printf("PGGBBGGG#B5J?????5#@#&&&&&&@@&@&#&&&&&&&\n");
    printf("PGGBBGPGBJYYJJ???B@@&&#&&@@@@@@@&&&&&&##\n");
    printf("PGGBBGG#G!Y555J7G&@@&&&&@@@@@@@@&&#&&&#&\n");
    printf("GGG#BB&&P!7J5PPG&@@@@@@@@@@@@&@@@&&&&&&&\n");

}

void displayCandidato5(){

    printf("PPPGBGGGGGGGGGBBBBBBBBBGGGGBGGGGGGGPPPPP\n");
    printf("PPPGGGPGGGGGGBGBBGGBGGGBGBGGGGGPGPPPPPP5\n");
    printf("PGGGGGGGGGGGGGGGBBBBBGGGGGGGPGGPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGGGB#B#BBBGGGGGGPPPPPPPPPPP\n");
    printf("GGGGBBGGGGGGGGPJJ??J??JG#GPGPPPPP55PPPPP\n");
    printf("PPPGBGBGGGGBGJ^^~~~^^^~7GBBGPP55555555PP\n");
    printf("PPPPGGBGGGGG5^^~~~~~~~~!JPBPPP55555Y5PGG\n");
    printf("PPPGGGGGGGGGY7Y5J!?55Y?!!7Y5PPPPP55Y5PGP\n");
    printf("PPPGGGGGGGGG5!!?7!!77!!!!77YPP5555YY5PPP\n");
    printf("PPGGGGGGGBBGB7^!!!!!!~~77!?PPP55555YY5PP\n");
    printf("PPGGGGGGGBBBBY^!7?7!!!!77J5PPP555555YPP5\n");
    printf("PPPGGGGPPGBGGGJ!!?7!7777!7PPP55555555PP5\n");
    printf("55PGGGPPPGGGGGP!!??77!^::J#BPPP555PP5555\n");
    printf("PPPPGGGGPPPGGY:::^^^:^^^Y#&&#BBGPPP55555\n");
    printf("PPPPGGGGGGBBBG~!7~^^^^^Y####&#&###BBGPP5\n");
    printf("PPPPGGBBBB#&#YYYY!^^:~P#&##B#B#######BBG\n");
    printf("PGGGGBB##B##Y!JY5J^:~G&###BGBBB###B##BBB\n");
    printf("GGGGBBBBB#&5!!7JY5J!B@&&&#BGB#&&########\n");
    printf("GGGG#BBPB#G?!7?7?YP#@&&&&#B#&@@&&&&####&\n");
    printf("PGGBBGGG#B5J?????5#@#&&&&&&@@&@&#&&&&&&&\n");
    printf("PGGBBGPGBJYYJJ???B@@&&#&&@@@@@@@&&&&&&##\n");
    printf("PGGBBGG#G!Y555J7G&@@&&&&@@@@@@@@&&#&&&#&\n");
    printf("GGG#BB&&P!7J5PPG&@@@@@@@@@@@@&@@@&&&&&&&\n");

}
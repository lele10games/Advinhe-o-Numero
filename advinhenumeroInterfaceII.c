#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define RESET    "\033[0m"
#define VERDE    "\033[32m"
#define VERMELHO "\033[31m"
#define AMARELO  "\033[33m"
#define CIANO    "\033[36m"
#define NEGRITO  "\033[1m"

int main(){
    srand(time(NULL));

    int i = 3;
    char nome[20];
    char options[2];
    int aleatorio;
    int palpite;

    printf(CIANO NEGRITO);
    printf("╔══════════════════════════════════════╗\n");
    printf("║     🍀  JOGO DA ADIVINHACAO  🍀      ║\n");
    printf("╚══════════════════════════════════════╝\n");
    printf(RESET);

    printf(AMARELO "Digite seu nome usuario: " RESET);
    scanf("%s", nome);

    printf(NEGRITO "BEM-VINDO AO JOGO DE ADVINHACAO, %s\n" RESET, nome);
    printf(CIANO "──────────────────────────────────────\n" RESET);

    printf("Digite " VERDE "[S]" RESET " para iniciar e " VERMELHO "[N]" RESET " para encerrar: \n");
    scanf("%s", options);

    if(strcmp(options, "S") == 0){
        printf(VERDE NEGRITO "VAAAMOOOSS LAAAA! 🍀🐧 %s\n" RESET, nome);
        printf(AMARELO "Voce tera 3 tentativas!!\n" RESET);


        aleatorio = rand()%10 + 1;

    while(i > 0){
        printf(CIANO "──────────────────────────────────────\n" RESET);
        printf(AMARELO "Tentativas restantes: %d\n" RESET, i);
        printf("Digite o seu palpite: \n");
        scanf("%d", &palpite);

        if(palpite == aleatorio){
            printf(VERDE NEGRITO "Voce acertou %d\n" RESET, aleatorio);
            break;
        } else {
            printf(VERMELHO "Voce errou tente novamente outro palpite: \n" RESET);
            i--;
                
        }
    }

    }


    if(i == 0){
        printf(VERMELHO NEGRITO "Suas tentativas acabaram! O numero era %d\n" RESET, aleatorio);
    }

    if(strcmp(options, "N") == 0){
        printf(CIANO "══════════════════════════════════════\n" RESET);
        printf(VERMELHO "Jogo encerrado!\n" RESET);
        printf(CIANO "══════════════════════════════════════\n" RESET);
    }

    return 0;
}
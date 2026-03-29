#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand (time(NULL));

int i = 3;
char nome[20];
char options [2];
int aleatorio;
int palpite;


printf("Digite seu nome usuario: ");
    scanf("%s", nome);

printf("BEM-VINDO AO JOGO DE ADVINHACAO, %s\n", nome);



printf("Digite S para iniciar e N para encerrar: \n");
scanf("%s", options);

if (strcmp(options, "S") == 0) { 
    printf("VAAAMOOOSS LAAAA! 🍀🐧 %s\n", nome);
        printf("Voce tera 3 tentativas!!\n");

        aleatorio = rand()%10 + 1;

    while(i > 0){
        
    printf("Digite o seu palpite: \n");
        scanf("%d", &palpite);

    if(palpite == aleatorio){
        printf("Voce acertou %d\n", aleatorio);
            break;
    }
    else{
        printf("Voce errou tente novamente outro palpite: \n");
          i--;  
    }

}
    
}

if(i == 0){
    printf("Suas tentativas acabaram! O numero era %d\n", aleatorio);
    
}

if (strcmp(options, "N") == 0){
        printf("==========Jogo encerrado!==========\n");
} 
            

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include "acoes.h"

#include "Cliente.h"
#include "ClienteEstatica.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int escolha;
    do{
        cls();
        printf("SELECIONE O TIPO DA LISTA\n");
        printf("    1 - DINAMICA\n");
        printf("    2 - ESTATICA\n");
        printf("Tipo: ");
        scanf("%d",&escolha);
        switch(escolha){
            case 1:
                cls();
                principal();
                break;
            case 2:
                cls();
                principalEstatica();
                break;
            default:
                escolha=0;
                cls();
                printf("---------------\n");
                printf("Opção inválida.\n");
                printf("---------------\n");
                pause();
        }
    }while(escolha==0);
    cls();
    printf("Programa encerrado.\n");
    pause();//system("pause"); //espera teclar
    cls();//system("cls"); //limpa a tela
    return 0;
}

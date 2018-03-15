#include "acoes.h"
/*Limpa a tela*/
void cls(void)
{
    #ifdef linux
    //código especifico para linux
    //system ("clear");//poderia ser este mas escolhi este outro pois é mais a cara do C
    printf("\e[H\e[2J");
    #elif defined WIN32
    //código específico para windows
    system ("cls");
    #else
    //outro sistema
    #endif

}
/*Pausa o sistema*/
void pause(void)
{
    #ifdef linux
    //código especifico para linux
    char _a;
    printf("Pressione qualquer tecla para continuar... ");
    setbuf(stdin,NULL);
    scanf("%[^\n]c",&_a);
    #elif defined WIN32
    //código específico para windows
    system ("pause");
    #else
   	//outro sistema
    #endif
}


void imprime_menu(char *titulo)
{

  printf("\n--------------- M E N U ---------------\n");
  printf("\n             LISTA %s\n",titulo);
  printf("---------------------------------------\n\n");
  printf("     0 - Sair\n");
  printf("     1 - Adiciona Funcionario\n");
  printf("     2 - Remove Funcionario \n");
  printf("     3 - Busca Funcionario\n");
  printf("     4 - Imprime Lista de Funcionarios\n");
  printf("     5 - Deleta Lista\n");
  printf("---------------------------------------\n\n");
}

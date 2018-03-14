#include "ClienteEstatica.h"

int principalEstatica() {
    cls();
    printf("LISTA ESTATICA \n");
    printf("Informe o tamanho da lista estatica: ");
    int tam=0;
    scanf("%d",&tam);
    ListaFuncionarioEstatica* list = lista_cria_Estatica(tam);
    cls();
	do{
        int valor=0;
		imprime_menu("ESTATICA"); // mostra o menu sempre depois de uma ação
		scanf ("%d",&valor);

		switch ( valor ) {
            case 0:
                return 0;
            case 1 :   //Adiciona um Funcionario
                {
                Funcionario* f = cria_Funcionario();
                    if(f!=NULL){

                        imprime_Func(f);
                        pause();//system("pause"); //espera teclar
                        cls();//system("cls"); //limpa a tela
                        if (lista_insere_ordenado_Estatica(list,f))
                            printf("Funcionario adicionado com Sucesso!!\n");
                        else
                            printf("Nao foi possivel adicionar!!\n");

                        pause();//system("pause"); //espera teclar
                        cls();//system("cls"); //limpa a tela

                   }else printf("Memoria insuficiente!!\n");
                }
                break;
            case 2 :    //Remove Funcionário
                {
                    int mat=0;
                    printf("Digite a matricula do Funcionario: ");
                    scanf ("%d",&mat);
                    if (lista_remove_Estatica(list, mat))
                        printf("Registro removido com sucesso.\n");
                    else
                        printf("Não foi possivel remover o registro.\n");
                    pause();//system("pause"); //espera teclar
                    cls();//system("cls"); //limpa a tela
                }
                break;
            case 3 :   //Busca Funcionario
		        {
                    int mat=0;
                    printf("Digite a matricula do Funcionario: ");
                    scanf ("%d",&mat);
                    Funcionario* f_aux = busca_Estatica(list,mat);
                    if(f_aux!=NULL){
                        imprime_Func(f_aux);
                        pause();//system("pause"); //espera teclar
                        cls();//system("cls"); //limpa a tela
                    }
                    else {
                        printf("Nao foi possivel retornar Funcionario\n");
                        pause();//system("pause"); //espera teclar
                        cls();//system("cls"); //limpa a tela
                        }
	     	   }
	     	   break;
            case 4 :    //Imprime a Lista de Funcionarios
               {
                   printf("\n=========== E M P R E S A ================\n");
                   printf("==========================================\n\n");
                   lista_imprime_Estatica(list);
                   printf("==========================================\n\n");
                   pause();//system("pause"); //espera teclar
                   cls();//system("cls"); //limpa a tela
               }
		    break;
		    case 5 :  //Deleta a Lista
                {
                /*List receberá NULL após liberação do espaço de memória
                  para o programa manter uma referencia da Lista*/
                lista_libera_Estatica(list);
                printf ("Lista Excluida.\n");
                pause();//system("pause"); //espera teclar
                cls();//system("cls"); //limpa a tela
                }
                break;
            default :
		     	{
				   printf ("Valor invalido!\n\n");
				   pause();//system("pause"); //espera teclar
                   cls();//system("cls"); //limpa a tela
		     	}
        }

	}while(1);

}


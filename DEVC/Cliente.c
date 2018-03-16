/*Programa Cliente para testar os TADs criados
na Disciplina Estrutura de Dados*/

#include "Cliente.h"

int principal() {
    ListaFuncionario* list = lista_cria();
	do{

		int valor=0;
		imprime_menu("DINAMICA"); // mostra o menu sempre depois de uma ação
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
				       	list = lista_insere_ordenado(list,f);
			       	    printf("Funcionario adicionado com Sucesso!!\n");
			       	    pause();//system("pause"); //espera teclar
				       	cls();//system("cls"); //limpa a tela

			       }else printf("Memoria insuficiente!!\n");
			   }
		     break;

		     case 2 :    //Remove Funcionário
		       {
		       	int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				list = lista_remove(list, mat);
				pause();//system("pause"); //espera teclar
                cls();//system("cls"); //limpa a tela
			   }
		     break;

		     case 3 :   //Busca Funcionario
		        {
		        int mat=0;
		        printf("Digite a matricula do Funcionario\n");
				scanf ("%d",&mat);
				Funcionario* f_aux = busca(list,mat);
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
		         break;
	     	   }
			 case 4 :    //Imprime a Lista de Funcionarios
		    {
		        printf("\n=========== E M P R E S A ================\n");
                printf("==========================================\n\n");
		      	lista_imprime(list);
		      	printf("==========================================\n\n");
		      	pause();//system("pause"); //espera teclar
                cls();//system("cls"); //limpa a tela
			  }
		     break;
		     case 5 :  //Deleta a Lista
		      {
		      	/*List receberá NULL após liberação do espaço de memória
				  para o programa manter uma referencia da Lista*/
		      	list = lista_libera(list);
			  }

		     break;

		     default :
		     	{
				   printf ("Valor invalido!\n\n");
				   pause();//system("pause"); //espera teclar
                   cls();//system("cls"); //limpa a tela
		     	}
        }

	}while(1); //Loop infinito

 }



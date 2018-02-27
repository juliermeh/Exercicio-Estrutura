/*Programa Cliente para testar os TADs criados
na Disciplina Estrutura de Dados*/

/*Bibliotecas da Linguagem utilizadas pelo cliente*/
#include <stdio.h>
#include <stdlib.h>

/*Bibliotecas criadas no programa (TADs)*/
#include "Funcionario.h"
#include "ListaFuncionario.h"
#include "ListaFuncionarioEstatica.h"

/*Função que imprime o menu principal do programa*/
void imprime_menu() {

	printf("\n--------------- M E N U ---------------\n");
	printf("---------------------------------------\n\n");
	printf("     1 - Adiciona Funcionario\n");
	printf("     2 - Remove Funcionario \n");
	printf("     3 - Busca Funcionario\n");
	printf("     4 - Imprime Lista de Funcionarios\n");
	printf("     5 - Deleta Lista\n");
	printf("---------------------------------------\n\n");
}


int main(int argc, char *argv[]) {

	int opcao;
	printf("Para Lista Dinamica digite 1 \n");
	printf("Para Lista Estatica digite 2 \n");
	printf("Voce deseja uma Lista Dinamica ou Estatica? ");
	system("pause"); //espera teclar
	scanf(opcao);

	if (opcao == 1) {
		ListaFuncionario* list = lista_cria();

		do {

			int valor = 0;
			imprime_menu(); // mostra o menu sempre depois de uma ação
			scanf("%d", &valor);

			switch (valor) {

			case 1:   //Adiciona um Funcionario
			{
				Funcionario* f = cria_Funcionario();
				if (f != NULL) {

					imprime_Func(f);
					system("pause"); //espera teclar
					system("cls"); //limpa a tela
					list = lista_insere_inicio(list, f);
					printf("Funcionario adicionado com Sucesso!!\n");
					system("pause"); //espera teclar
					system("cls"); //limpa a tela

				}
				else printf("Memoria insuficiente!!\n");
			}
			break;

			case 2:    //Remove Funcionário
			{
				int mat = 0;
				printf("Digite a matricula do Funcionario\n");
				scanf("%d", &mat);
				list = lista_remove(list, mat);
				system("pause"); //espera teclar
				system("cls"); //limpa a tela
			}
			break;

			case 3:   //Busca Funcionario
			{
				int mat = 0;
				printf("Digite a matricula do Funcionario\n");
				scanf("%d", &mat);
				Funcionario* f_aux = busca(list, mat);
				if (f_aux != NULL) {

					imprime_Func(f_aux);
					system("pause");
					system("cls");

				}
				else {
					printf("Nao foi possivel retornar Funcionario\n");
					system("pause");
					system("cls");

				}
				break;
			}
			case 4:    //Imprime a Lista de Funcionarios
			{
				printf("\n=========== E M P R E S A ================\n");
				printf("==========================================\n\n");
				lista_imprime(list);
				printf("==========================================\n\n");
				system("pause"); //espera teclar
				system("cls"); //limpa a tela
			}
			break;
			case 5:  //Deleta a Lista
			{
				/*List receberá NULL após liberação do espaço de memória
				para o programa manter uma referencia da Lista*/
				list = lista_libera(list);
			}

			break;

			default:
			{
				printf("Valor invalido!\n\n");
				system("pause");
				system("cls");
			}
			}

		} while (1); //Loop infinito
	}
	else if(opcao == 2) {
		int tamanho = 10;
		printf("Para o tamanho padrão (10) aperte enter\n");
		printf("Digite o tamanho da lista: ");
		scanf(tamanho);
		ListaFuncionarioEstatica* list = lista_cria_Estatica(tamanho);

		do {

			int valor = 0;
			imprime_menu(); // mostra o menu sempre depois de uma ação
			scanf("%d", &valor);

			switch (valor) {

			case 1:   //Adiciona um Funcionario
			{
				Funcionario* f = cria_Funcionario();
				if (f != NULL) {

					imprime_Func(f);
					system("pause"); //espera teclar
					system("cls"); //limpa a tela
					//list = lista_insere_inicio_Estatica(list, f);
					list = lista_insere_ordenado_Estatica(list, f);
					printf("Funcionario adicionado com Sucesso!!\n");
					system("pause"); //espera teclar
					system("cls"); //limpa a tela

				}
				else printf("Memoria insuficiente!!\n");
			}
			break;

			case 2:    //Remove Funcionário
			{
				int mat = 0;
				printf("Digite a matricula do Funcionario\n");
				scanf("%d", &mat);
				list = lista_remove_Estatica(list, mat);
				system("pause"); //espera teclar
				system("cls"); //limpa a tela
			}
			break;

			case 3:   //Busca Funcionario
			{
				int mat = 0;
				printf("Digite a matricula do Funcionario\n");
				scanf("%d", &mat);
				Funcionario* f_aux = busca_Estatica(list, mat);
				if (f_aux != NULL) {

					imprime_Func(f_aux);
					system("pause");
					system("cls");

				}
				else {
					printf("Nao foi possivel retornar Funcionario\n");
					system("pause");
					system("cls");

				}
				break;
			}
			case 4:    //Imprime a Lista de Funcionarios
			{
				printf("\n=========== E M P R E S A ================\n");
				printf("==========================================\n\n");
				lista_imprime_Estatica(list);
				printf("==========================================\n\n");
				system("pause"); //espera teclar
				system("cls"); //limpa a tela
			}
			break;
			case 5:  //Deleta a Lista
			{
				/*List receberá NULL após liberação do espaço de memória
				para o programa manter uma referencia da Lista*/
				list = lista_libera_Estatica(list);
			}

			break;

			default:
			{
				printf("Valor invalido!\n\n");
				system("pause");
				system("cls");
			}
			}

		} while (1); //Loop infinito
	}

}

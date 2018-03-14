#ifndef LISTAFUNCIONARIOESTATICA_H_INCLUDED
#define LISTAFUNCIONARIOESTATICA_H_INCLUDED

/* TAD: Lista */

#include <stdio.h>
#include <stdlib.h>

#include  "Funcionario.h" //Usa o Tipo Funcionario

/* Tipo exportado */
typedef Funcionario* ListaFuncionarioEstatica ;

/***********************************************************/
/******************* Funções exportadas *******************/

/* Função cria Lista- Aloca e retorna uma Lista de Funcionários */
ListaFuncionarioEstatica* lista_cria_Estatica (int tamanho);

/*Verifica se a lista esta vazia retornando:
0 - Lista nao e vazia;
1 - Lista vazia.*/
int e_Lista_Vazia(ListaFuncionarioEstatica* list);

/*Verifica se a lista esta cheia retornando:
0 - Lista nao esta cheia;
1 - Lista esta cheia.*/
int e_Lista_Cheia(ListaFuncionarioEstatica* list);

/* Função insere na posicao especifica*/
int lista_insere_posicao_Estatica (ListaFuncionarioEstatica* list, Funcionario* func, int posi);

/* Função insere no inicio - Insere um Novo Funcionário no inicio da Lista */
int lista_insere_inicio_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/*Funcao para inserir ordenado pela matricula*/
int lista_insere_ordenado_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/* Função busca- busca um Funcionario na lista */
Funcionario* busca_Estatica(ListaFuncionarioEstatica* lst, int v);

/* Função Remove - Remove um Funcionário da Lista retornando:
0 - Nao foi possivel remover;
1 - Registro removido.*/
int lista_remove_Estatica(ListaFuncionarioEstatica* list, int val);

/* Função Imprime - Imprime uma Lista de Funcionários*/
void lista_imprime_Estatica (ListaFuncionarioEstatica* list);

/*Esvazia a lista*/
void lista_libera_Estatica (ListaFuncionarioEstatica* list);


#endif // LISTAFUNCIONARIOESTATICA_H_INCLUDED

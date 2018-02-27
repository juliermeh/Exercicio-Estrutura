#include <stdio.h>
#include <stdlib.h>

#include  "Funcionario.h"  //Usa o Tipo Funcionario
#include "ListaFuncionarioEstatica.h"

int TAM_LISTA=0;

/* Fun��o cria Lista- Aloca e retorna uma Lista de Funcion�rios Estatica*/
ListaFuncionarioEstatica* lista_cria_Estatica (int tamanho){
    TAM_LISTA=tamanho;
    /*Reserva um Array de Funcionario*/
    ListaFuncionarioEstatica* novaLista = (ListaFuncionarioEstatica*)malloc(sizeof(Funcionario*)*TAM_LISTA);
    if (novaLista==NULL) return NULL;//N�o foi poss�vel reservar memoria
    int k;
    for(k=0;k<TAM_LISTA;k++)//Esvazia todos os elementos do array
        novaLista[k]=NULL;
    return novaLista;
}

int e_Lista_Vazia(ListaFuncionarioEstatica* list){
    return (list[0]==NULL);
}

int e_Lista_Cheia(ListaFuncionarioEstatica* list){
    return (list[TAM_LISTA-1]!=NULL);
}
/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
void lista_insere_posicao_Estatica (ListaFuncionarioEstatica* list, Funcionario* func, int posi){
    if ((posi<0)||(posi>=TAM_LISTA)){
        printf("Posi��o invalida.");
        return;
    }
    if(e_Lista_Cheia(list)){
        printf("A lista esta cheia.");
        return;
    }
    int k;
    for (k=TAM_LISTA-1;k>posi;k++)
        list[k]=list[k-1];
    list[posi]=func;
}


/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
void lista_insere_inicio_Estatica (ListaFuncionarioEstatica* list, Funcionario* func){
    lista_insere_posicao_Estatica(list,func,0);
}

/*Funcao para inserir ordenado*/
void lista_insere_ordenado_Estatica (ListaFuncionarioEstatica* list, Funcionario* func){
    int k=0;
    while((k<TAM_LISTA)&&(func->matricula<list[k]->matricula)){
        k++;
    }
    lista_insere_posicao_Estatica(list,func,k);
}

/* Fun��o busca- busca um Funcionario na lista */
Funcionario* busca_Estatica(ListaFuncionarioEstatica* lst, int v){
    return lst[v];
}


/* Fun��o Remove - Remove um Funcion�rio da Lista */
void lista_remove_Estatica(ListaFuncionarioEstatica* list, int val){
     if (e_Lista_Vazia(list)){
        printf("Lista vazia.");
        return;
    }
    int k=0;
    while((k<TAM_LISTA)&&(list[k]->matricula!=val))k++;
    if (k>=TAM_LISTA){
        printf("Elemento nao localizado");
        return;
    }
    free(list[val]);
    int q;
    for(q=k;q<TAM_LISTA;q++){
        list[q]=list[q+1];
    }
    list[TAM_LISTA-1]=NULL;
}

/* Fun��o Imprime - Imprime uma Lista de Funcion�rios*/
void lista_imprime_Estatica (ListaFuncionarioEstatica* list){
    if (e_Lista_Vazia(list)){
        printf("A lista est� vazia!\n");
        return;
    }
    int k=0;
    while((k<TAM_LISTA)&&(list[k]!=NULL)){
        imprime_Func(list[k]->matricula);
    }

}

void lista_libera_Estatica (ListaFuncionarioEstatica* list){
    int k=0;
    while((k<TAM_LISTA)&&(list[k]!=NULL)){
        lista_remove_Estatica(list,k);
        k++;
    }
}

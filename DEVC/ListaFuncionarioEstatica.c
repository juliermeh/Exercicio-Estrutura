#include "ListaFuncionarioEstatica.h"

int TAM_LISTA=0;

/* Função cria Lista- Aloca e retorna uma Lista de Funcionários Estatica*/
ListaFuncionarioEstatica* lista_cria_Estatica (int tamanho){
    TAM_LISTA=tamanho;
    /*Reserva um Array de Funcionario*/
    ListaFuncionarioEstatica* novaLista = (ListaFuncionarioEstatica*)malloc(sizeof(Funcionario*)*TAM_LISTA);
    if (novaLista==NULL) return NULL;//Não foi possível reservar memoria
    int k;
    for(k=0;k<TAM_LISTA;k++)//Esvazia todos os elementos do array
        novaLista[k]=NULL;
    return novaLista;
}

/*Verifica se a lista esta vazia*/
int e_Lista_Vazia(ListaFuncionarioEstatica* list){
	if (TAM_LISTA==0) return 1;
    return (list[0]==NULL);
}

/*Verifica se a lista esta cheia*/
int e_Lista_Cheia(ListaFuncionarioEstatica* list){
    return (list[TAM_LISTA-1]!=NULL);
}
/* Função insere na posicao especifica*/
int lista_insere_posicao_Estatica (ListaFuncionarioEstatica* list, Funcionario* func, int posi){
    if(e_Lista_Cheia(list)){
        printf("A lista esta cheia.\n");
        return 0;
    }
    if ((posi<0)||(posi>=TAM_LISTA)){
        printf("Posicao invalida.\n");
        return 0;
    }
    int k;
    for (k=TAM_LISTA-1;k>posi;k--)
        list[k]=list[k-1];
    list[posi]=func;
    return 1;
}


/* Função insere no inicio - Insere um Novo Funcionário no inicio da Lista */
int lista_insere_inicio_Estatica (ListaFuncionarioEstatica* list, Funcionario* func){
   return lista_insere_posicao_Estatica(list,func,0);
}

/*Funcao para inserir ordenado pela matricula*/
int lista_insere_ordenado_Estatica (ListaFuncionarioEstatica* list, Funcionario* func){
    int k=0;
    while((k<TAM_LISTA)&&(list[k]!=NULL)){
        if (func->matricula<list[k]->matricula)
            break;
        k++;
    }
    return lista_insere_posicao_Estatica(list,func,k);
}

/* Função busca- busca um Funcionario na lista */
Funcionario* busca_Estatica(ListaFuncionarioEstatica* lst, int v){
    int k=0;
    while(lst[k]!=NULL){
        if (lst[k]->matricula==v) break;
        k++;
    }
    return lst[k];
}

int lista_Remover_Posicao(ListaFuncionarioEstatica* list, int pos){
     if ((pos<0)||(pos>=TAM_LISTA)||(list[pos]==NULL)){
        printf("Elemento nao localizado.\n");
        return 0;
    }
    free(list[pos]);
    int q;
    for(q=pos;q<TAM_LISTA-1;q++){
        list[q]=list[q+1];
    }
    list[TAM_LISTA-1]=NULL;
    return 1;
}


/* Função Remove - Remove um Funcionário da Lista */
int lista_remove_Estatica(ListaFuncionarioEstatica* list, int val){
     if (e_Lista_Vazia(list)){
        printf("Lista vazia.\n");
        return 0;
    }
    int k=0;
    while((k<TAM_LISTA)&&(list[k]!=NULL)){
        if (list[k]->matricula==val){
            return lista_Remover_Posicao(list,k);
        }
        k++;
    }
    return 0;
}

/* Função Imprime - Imprime uma Lista de Funcionários*/
void lista_imprime_Estatica (ListaFuncionarioEstatica* list){
    if (e_Lista_Vazia(list)){
        printf("A lista esta vazia!\n");
        return;
    }
    int k=0;
    while((k<TAM_LISTA)&&(list[k]!=NULL)){
        imprime_Func(list[k]);
        k++;
    }

}

/*Esvazia a lista*/
void lista_libera_Estatica (ListaFuncionarioEstatica* list){
    while(!e_Lista_Vazia(list)){
        lista_Remover_Posicao(list,0);
    }
}

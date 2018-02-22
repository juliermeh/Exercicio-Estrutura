/* TAD: Lista */

/* Tipo exportado */
typedef struct lista ListaFuncionarioEstatica;

/***********************************************************/
/******************* Funções exportadas *******************/

/* Função cria Lista- Aloca e retorna uma Lista de Funcionários */
ListaFuncionarioEstatica* listaestatica_cria(int);

/* Função insere no inicio - Insere um Novo Funcionário no inicio da Lista */
ListaFuncionarioEstatica* listaestatica_insere_inicio(ListaFuncionarioEstatica* list, Funcionario* func);

/* Função busca- busca um Funcionario na lista */
Funcionario* buscaestatica(ListaFuncionarioEstatica* lst, int v);

/* Função Lista Vazia- Testa de a Lista está vazia  */
int listaestatica_vazia(ListaFuncionarioEstatica* list);

/* Função Remove - Remove um Funcionário da Lista */
ListaFuncionarioEstatica* listaestatica_remove(ListaFuncionarioEstatica* list, int val);

/* Função Imprime - Imprime uma Lista de Funcionários*/
void listaestatica_imprime(ListaFuncionarioEstatica* list);

/*Libera o espaço de memória da lista. Retorna NULL para manter uma referêcia da lista
no programa cliente;*/
ListaFuncionarioEstatica* listaestatica_libera(ListaFuncionarioEstatica* list);
/* TAD: Lista */

/* Tipo exportado */
typedef struct lista ListaFuncionarioEstatica;

/***********************************************************/
/******************* Fun��es exportadas *******************/

/* Fun��o cria Lista- Aloca e retorna uma Lista de Funcion�rios */
ListaFuncionarioEstatica* listaestatica_cria(int);

/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
ListaFuncionarioEstatica* listaestatica_insere_inicio(ListaFuncionarioEstatica* list, Funcionario* func);

/* Fun��o busca- busca um Funcionario na lista */
Funcionario* buscaestatica(ListaFuncionarioEstatica* lst, int v);

/* Fun��o Lista Vazia- Testa de a Lista est� vazia  */
int listaestatica_vazia(ListaFuncionarioEstatica* list);

/* Fun��o Remove - Remove um Funcion�rio da Lista */
ListaFuncionarioEstatica* listaestatica_remove(ListaFuncionarioEstatica* list, int val);

/* Fun��o Imprime - Imprime uma Lista de Funcion�rios*/
void listaestatica_imprime(ListaFuncionarioEstatica* list);

/*Libera o espa�o de mem�ria da lista. Retorna NULL para manter uma refer�cia da lista
no programa cliente;*/
ListaFuncionarioEstatica* listaestatica_libera(ListaFuncionarioEstatica* list);
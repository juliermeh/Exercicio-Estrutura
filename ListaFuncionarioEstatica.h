/* TAD: Lista */

/* Tipo exportado */
typedef Funcionario* ListaFuncionarioEstatica ;

/***********************************************************/
/******************* Fun��es exportadas *******************/

/* Fun��o cria Lista- Aloca e retorna uma Lista de Funcion�rios */
ListaFuncionarioEstatica* lista_cria_Estatica (int tamanho);

/* Fun��o insere no inicio - Insere um Novo Funcion�rio no inicio da Lista */
void lista_insere_inicio_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/* Fun��o insere ordenado - Insere um Novo Funcion�rio ordenado dentro da Lista */
void lista_insere_ordenado_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/* Fun��o busca- busca um Funcionario na lista */
Funcionario* busca_Estatica(ListaFuncionarioEstatica* lst, int v);

/* Fun��o Lista Vazia- Testa de a Lista est� vazia  */
int e_Lista_Vazia(ListaFuncionarioEstatica* list);

/* Fun��o Lista Cheia - Testa de a Lista est� cheia  */
int e_Lista_Cheia(ListaFuncionarioEstatica* list);

/* Fun��o Remove - Remove um Funcion�rio da Lista */
void lista_remove_Estatica(ListaFuncionarioEstatica* list, int val);

/* Fun��o Imprime - Imprime uma Lista de Funcion�rios*/
void lista_imprime_Estatica (ListaFuncionarioEstatica* list);

/*Libera o espa�o de mem�ria da lista. Retorna NULL para manter uma refer�cia da lista
no programa cliente;*/
void lista_libera_Estatica (ListaFuncionarioEstatica* list);

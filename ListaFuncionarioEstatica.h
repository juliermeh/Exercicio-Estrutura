/* TAD: Lista */

/* Tipo exportado */
typedef Funcionario* ListaFuncionarioEstatica ;

/***********************************************************/
/******************* Funções exportadas *******************/

/* Função cria Lista- Aloca e retorna uma Lista de Funcionários */
ListaFuncionarioEstatica* lista_cria_Estatica (int tamanho);

/* Função insere no inicio - Insere um Novo Funcionário no inicio da Lista */
void lista_insere_inicio_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/* Função insere ordenado - Insere um Novo Funcionário ordenado dentro da Lista */
void lista_insere_ordenado_Estatica (ListaFuncionarioEstatica* list, Funcionario* func);

/* Função busca- busca um Funcionario na lista */
Funcionario* busca_Estatica(ListaFuncionarioEstatica* lst, int v);

/* Função Lista Vazia- Testa de a Lista está vazia  */
int e_Lista_Vazia(ListaFuncionarioEstatica* list);

/* Função Lista Cheia - Testa de a Lista está cheia  */
int e_Lista_Cheia(ListaFuncionarioEstatica* list);

/* Função Remove - Remove um Funcionário da Lista */
void lista_remove_Estatica(ListaFuncionarioEstatica* list, int val);

/* Função Imprime - Imprime uma Lista de Funcionários*/
void lista_imprime_Estatica (ListaFuncionarioEstatica* list);

/*Libera o espaço de memória da lista. Retorna NULL para manter uma referêcia da lista
no programa cliente;*/
void lista_libera_Estatica (ListaFuncionarioEstatica* list);

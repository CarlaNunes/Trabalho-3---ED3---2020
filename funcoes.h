/*
Contém, todas as funbções utilizadas no trabalho.
Foi fornecido outro .h com as funções fornecidas. foi tomada a decisão de criar só um .h.
*/
typedef struct pessoa{
    char removido = '1'; //Verificar esse valor depois, na revisão
    int idPessoa;
    char pessoa[40];
    int idade;
    char twitterPessoa[15];
    
}Pessoa;

typedef struct index_p  {
	tipoChave idPessoa;
  int rrn;
}Index_p;

 typedef struct dados{
    char removido; 
    int idPessoaQueSegue; 
    int idPessoaQueESeguida;
    char grauAmizade[3]; 
    char dataInicioQueSegue[11];
    char dataFimQueSegue[11];
}Dados;

Pessoa pessoa[2000];
Pessoa pessoa_aux[200];//Para a funcionalidade 4
Pessoa pessoa_aux2[200];//Para a funcionalidade 5
Index_p index_p[2000];
//**************************************************************************
//___________Funções_______________________________
int le_arquivo(FILE *arquivo,char nomeArquivoCsv[20]);
void lidando_idade_negativas(FILE *arquivo,int cont);
void escreve_Binario(FILE *arquivo, int cont,char nomeArquivoBinario[20]);
int comp(const void *p, const void *q);
void cria_Index(FILE *arquivo,int cont,char nomeArquivoIndice[20]);
void binarioNaTela1(char nomeArquivoBinario[20], char nomeArquivoIndice[20]);
void scan_quote_string(char *str); /* Use para ler strings entre aspas. */ //Na hora da pesquisa por exemplo
void trim(char *str); /* Pode ser útil pra você (extra). */
void exibir_campos(FILE *arquivo, int cont, char nomeArquivoBinario[20]);
void le_index(FILE *arquivo, int cont,char nomeArquivoIndice[20]);

void insereIndex(FILE *arquivo,int cont,char nomeArquivoIndice[20]);
void pesquisaNome(FILE *arquivo,int cont,char nomeP[40]);
void retira_Espaco(char string[40]);
int busca_Idade(FILE * arquivo,int idade, int cont,char nomeArquivoBinario[20]);
void busca_Twitter(FILE *arquivo,char twitter[15],int cont,char nomeArquivoBinario[20]);
//int Procura_nomes(string nome, char pessoa[]);
void procura_Nome(FILE * arquivo, int cont, char nome2[40],char nomeArquivoBinario[20]); 
//Ver qual destas versões está corretamente
int procura_ID(FILE *arquivo, int cont, int rrn);
int procura_ID(FILE *arquivo, int cont, int id);
/////////*****************************
int busca_Binaria(Index_p index_p[], int cont, int id);
void pesquisaRegistro(FILE *arquivo,int rrn,int cont,int id,char nomeArquivoBinario[20]);
void inseri_Arquivo(FILE *arquivo, int numInseri,int cont, char nomeArquivoBinario[20]);
void inseri_Index(FILE *arquivo,int numInseri,int cont,char nomeArquivoBinario[20]);
void atualizacao_reg(int con, int numAtu );
void atualizacao_index(int con, int numAtu );
int retirar_ponto(char nomeArquivoCsv[20]);

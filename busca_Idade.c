/*
Busca simples por idade. Se achar algo diferente de um número positivo retorno '-'.
Quando acha a idade solicitada, retorna os dados restantes.
*/

int busca_Idade(FILE * arquivo,int idade, int cont,char nomeArquivoBinario[20]){
  char status;
  int quantidadePessoas = cont;
  char lixo[40]; 
  char aux[40];
  int i = 0;
    
     if ((arquivo = fopen(nomeArquivoBinario, "rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    else{
       fread(&status, sizeof(char) ,1 ,arquivo);//Lê o status do cabeçalho do arquivo
       fread(&quantidadePessoas,sizeof(int),1 ,arquivo); // Lê o quantidade de pessoas do cabeçalho do arquivo    
       fread(lixo,sizeof(char),1 ,arquivo);// Lê lixo do cabeçalho do arquivo
        for(i = 0; i < cont;i++ ){
           fread(&pessoa,sizeof(Pessoa),1,arquivo);
        }
        for(i = 0; i < cont;i++ ){
          if(pessoa[i].idade == idade){
             printf("Dados da pessoa de código : %d\n", pessoa[i].idPessoa);
            if(strcmp(pessoa[i].pessoa,"$") == 0){
             printf("Nome: -\n");
            }          
            else{
              printf("nomePessoa: %s\n",pessoa[i].pessoa);
            }

            if( pessoa[i].idade == 0){
              printf("Idade: - \n");
            }   
            else{
             printf("Idade: %d anos \n",pessoa[i].idade);
            } 
           printf("Twitter:%s\n", pessoa[i].twitterPessoa);
            printf("\n");
            return 0;
          }
         
           
        }

    }
    
  fclose(arquivo);
}

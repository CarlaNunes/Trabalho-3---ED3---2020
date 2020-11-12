void busca_Twitter(FILE *arquivo,char twitter[15],int cont,char nomeArquivoBinario[20]){
  char status;
  int quantidadePessoas = cont;
  char lixo[40]; 
  char aux[40];
  int i = 0;
    
     if ((arquivo = fopen(nomeArquivoBinario, "rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    else{
      //printf("\n String recebida: %s",twitter);
       fread(&status, sizeof(char) ,1 ,arquivo);
       fread(&quantidadePessoas,sizeof(int),1 ,arquivo);      
       fread(lixo,sizeof(char),1 ,arquivo);
        for(i = 0; i < cont;i++ ){
           fread(&pessoa,sizeof(Pessoa),1,arquivo);
           //printf("\n String recebida da struct: %s",pessoa[i].twitterPessoa);
            
        }
        for(i = 0; i < cont;i++ ){
          //printf("\n Twitter recebidos: %s",pessoa[i].twitterPessoa);
          int val = strcmp(pessoa[i].twitterPessoa,twitter);
        //  printf("Valor strcmp %d",val);
          if(strncmp(pessoa[i].twitterPessoa,twitter,10) == 0){
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
          }
           else if((strncmp(pessoa[i].twitterPessoa,twitter,10)!=0)){
            printf("\nResgistro não encontrado \n");
          }
        }
//strncmp(pessoa[i].twitterPessoa,twitter,7)

    }
  fclose(arquivo);
}

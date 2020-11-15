
//-------------Funcionalidade 2--------------------------------------
/*
Irá ler, o arquivo gerado pela extração dos dados do arquivo. csv e irá ler e exibir todos os registros.
*/
void exibir_campos(FILE *arquivo, int cont, char nomeArquivoBinario[20]){
  char status;
  char lixo2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
  int quantidadePessoas = cont;
  char lixo[40]; 
  int i = 0;
  char aux[] = "-";
   if ((arquivo = fopen(nomeArquivoBinario, "rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    else{
      //Para ler o cabeçalho
      fread(&status, sizeof(char) ,1 ,arquivo);
      fread(&quantidadePessoas,sizeof(int),1 ,arquivo);      
      fread(lixo,sizeof(char),1 ,arquivo);
      //Para ler o restante do arquivo;
      for(i = 0; i < cont;i++ ){
         fread(&pessoa,sizeof(Pessoa),1,arquivo);
      }
      //Testando a leitura:
      for(i = 0; i < cont;i++ ){
       // if(strcmp(pessoa[i].pessoa,lixo2)==0){
         // strcpy(pessoa[i].pessoa,aux);
      //  }
        if(strcmp(pessoa[i].twitterPessoa,lixo2)==0){
          strcpy(pessoa[i].twitterPessoa,aux);
        }
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
            
      }
      
    fclose(arquivo);
    }

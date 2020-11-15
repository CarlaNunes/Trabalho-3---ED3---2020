/*
 A função abaixo, atualiza o status do cabeçalho quando se finaliza a operação.
 */
void atualizar_status(FILE *arquivo,int cont,char nomeArquivoBinario[20]){
   char status = '1';
  char nome[40];
  int quantidadePessoas = cont;
  char lixo[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";

  if ((arquivo = fopen(nomeArquivoBinario, "wb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
     // fprintf(arquivo,"%s%d%s",&status,quantidadePessoas,lixo);
     fwrite(&status,sizeof(char) ,1, arquivo);
     fwrite(&quantidadePessoas,sizeof(int) ,1, arquivo);
     fwrite(&lixo, sizeof(char) ,1, arquivo);

    for(int i = 0; i<cont; i++){
      //A parte de complementamndo com lixos não deu certo.
      
            int tam = 0, tam2 = 0;
            pessoa[i].removido = '1';
            fwrite(&pessoa[i].removido,1,sizeof(char),arquivo);
            int id = pessoa[i].idPessoa;
            fwrite(&id,1,sizeof(int),arquivo);

        
             
         
            strcpy(nome,pessoa[i].pessoa);
            fwrite(&nome,1,sizeof(char),arquivo);
            int idade = pessoa[i].idade;
            fwrite(&idade,1,sizeof(int),arquivo);
            char twitter[15];
            strcpy(twitter,pessoa[i].pessoa);
            fwrite(&twitter,1,sizeof(char),arquivo);
            
       
    }


    fclose(arquivo);
 }

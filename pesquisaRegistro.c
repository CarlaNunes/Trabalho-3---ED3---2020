/*
JUntamente com a busca binária, irá retornar o registro se a pesquisa for realizada com o id.
*/

void pesquisaRegistro(FILE *arquivo,int rrn,int cont,int id,char nomeArquivoBinario[20]){
    //Pessoa pessoa;

  char status;
  char lixo2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
  int quantidadePessoas = cont;
  char lixo[40]; 
  int i = 0;
  int posi = 0;
  char aux[] = "-";
  int tam = 0;
   if ((arquivo = fopen(nomeArquivoBinario, "rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    
    else{
      
      
       
       fseek(arquivo,sizeof(Pessoa)*rrn, SEEK_SET );
       fread(&pessoa, sizeof(Pessoa), 1, arquivo);
      
        for(i = 0; i < cont; i++){
          if(index_p[i].idPessoa == id){
            posi = index_p[i].rrn;
          }
        }
        
       
        tam  = strlen(pessoa[posi].pessoa);
        printf("Dados da pessoa de código : %d\n", pessoa[posi].idPessoa);
         if(strcmp(pessoa[posi].pessoa,"$") == 0 || tam <= 1){//Mudar para 3 se der ruim em alguma parte
            printf("Nome: -\n");
        }          
        else{
          printf("nomePessoa: %s\n",pessoa[posi].pessoa);
        }

        if( pessoa[posi].idade == 0){
          printf("Idade: - \n");
        }   
        else{
          printf("Idade: %d anos \n",pessoa[posi].idade);
        } 
           printf("Twitter:%s\n", pessoa[posi].twitterPessoa);
            printf("\n");
            
    }
       
            
    fclose(arquivo);    
}

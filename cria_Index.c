/*
Cria o arquivo de índice primário.
*/
void cria_Index(FILE *arquivo,int cont,char nomeArquivoIndice[20]){
 
  char status = '0'; //Arquivo de dados consistente. Ao finalizar terá valor igual a -1.
  char lixo[] = "$$$$$$$";
  char linha[400];
  int id = 0;
  int aux = 0;
  //nt rRN = 0;
  int i = 0;
  if ((arquivo = fopen(nomeArquivoIndice,"wb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
  
  
  else{
      //As duas linhas abaixo, escrevem o cabeçalho do arquivo de indíce primário.
      fwrite(&status, sizeof(char) , 1 , arquivo);
      fwrite(lixo, sizeof(char) , 1,  arquivo);
      //Testando os valores recebidos:
       for(i = 0; i < cont; i++){
        // printf("\n ID: %d \n",index_p[i].idPessoa);
         //printf("\n RRN: %d \n",index_p[i].rrn);
       }
     
      for(i = 0; i < cont; i++){
         fwrite(&pessoa,1, sizeof(Pessoa),arquivo);
      }
      
      
  }

  fclose(arquivo);
  
}

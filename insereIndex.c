/*Irá criar o arquivo de indice primário
*/
void insereIndex(FILE *arquivo,int cont,char nomeArquivoIndice[20]) {
 char status = '0'; //Arquivo de dados consistente. Ao finalizar terá valor igual a 1.
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
      fwrite(&status, sizeof(char) , 1 , arquivo);
      fwrite(lixo, sizeof(char) , 1,  arquivo);
      for(int i = 0; i<cont; i++){
        fwrite(&index_p,1, sizeof(Index_p),arquivo);
       }
    
  }
 fclose(arquivo);

}

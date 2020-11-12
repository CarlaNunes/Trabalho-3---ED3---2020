//Quando finalizar, usar a ordenação.

void inseri_Index(FILE *arquivo,int numInseri,int cont,char nomeArquivoIndice[20]){
   if ((arquivo = fopen(nomeArquivoIndice, "ab")) == NULL) {
        printf("Falha no processamento do arquivo.\n");
    }
    
     

    for(int i = cont; i <cont + numInseri; i++){
     
      index_p[i].idPessoa = pessoa_aux[i].idPessoa;
      index_p[i].rrn = i;
      fwrite(&index_p,1, sizeof(Index_p),arquivo);
       
    }


    fclose(arquivo);

}

//******************Funcionalidade 4****************
//Inseção de campos adicionais usando a abordagem estática:
//Lembrando que, terei que fazer as ordenações no Index e afins
//Fazer atualizações nos status
//Usar a função Binário na tela antes da finalização dessa função

void inseri_Arquivo(FILE *arquivo, int numInseri,int cont, char nomeArquivoBinario[20]){//ab--> para inserir no final do arquivo
  char status = '0';
  if ((arquivo = fopen(nomeArquivoBinario, "ab")) == NULL) {
        printf("Falha no processamento do arquivo.\n");
    }
    
     

    for(int i = cont; i <cont + numInseri; i++){
      pessoa[i].removido = '1';
      pessoa[i].idPessoa =  pessoa_aux[i].idPessoa;
      strcpy(pessoa[i].pessoa, pessoa_aux[i].pessoa);  
      pessoa[i].idade =pessoa_aux[i].idade;
      strcpy(pessoa[i].twitterPessoa,pessoa_aux[i].twitterPessoa); 

      fwrite(&pessoa,1, sizeof(Pessoa),arquivo);
       
    }


    fclose(arquivo);

}

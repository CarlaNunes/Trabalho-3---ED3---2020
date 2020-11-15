//Versão com impressão campo a campo
//Também com preenchimento de campos "pequenos com lixo"
void escreve_Binario2(FILE *arquivo, int cont,char nomeArquivoBinario[20]){
  
  char status = '0';
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
      
      //Completando as strings com lixo
      /*
      if(strlen(pessoa[i].pessoa)<40){
          int tamFinal = 40 - strlen(pessoa[i].pessoa);
          for(int j = tamFinal; j < 40; j++){
            strcpy(pessoa[i].pessoa, "$"); 
          }
         
        //fwrite(&pessoa, sizeof(Pessoa),1,arquivo);  
      }
      if(strlen(pessoa[i].twitterPessoa)<15){
          int tamFinal = 15 - strlen(pessoa[i].pessoa);
          for(int j = tamFinal; j < 15;j++){
            strcpy(pessoa[i].twitterPessoa, "$"); 
          }
      }
      */
      //else{
            int tam = 0, tam2 = 0;
            fwrite(&removido,1,sizeof(char),arquivo);
            int id = pessoa[i].idPessoa;
            fwrite(&id,1,sizeof(int),arquivo);

          //  if(strlen(pessoa[i].pessoa)<1){
         // int tamFinal = 40 - strlen(pessoa[i].pessoa);
         // for(int j = tamFinal; j < 40;j++){
           //   char lixo = '$';
             //  strcpy(pessoa[i].pessoa, "$"); 
              // strcpy(nome,pessoa[i].pessoa);
              // fwrite(&nome,1,sizeof(char),arquivo);
             
           // }
           
            strcpy(nome,pessoa[i].pessoa);
            fwrite(&nome,1,sizeof(char),arquivo);
            int idade = pessoa[i].idade;
            fwrite(&idade,1,sizeof(int),arquivo);
            char twitter[15];
            strcpy(twitter,pessoa[i].pessoa);
            fwrite(&twitter,1,sizeof(char),arquivo);
            //fwrite(&pessoa,1, sizeof(Pessoa),arquivo);
            
        
       //}
      // if(strlen(pessoa[i].pessoa)<1){
         // int tamFinal = 40 - strlen(pessoa[i].pessoa);
         // for(int j = tamFinal; j < 40;j++){
         //   char lixo = '$';
          //  strcpy(pessoa[i].pessoa, "$"); 

         //   fwrite(&pessoa,sizeof(Pessoa),1,arquivo);
        //  }
           
      
       
    }


    fclose(arquivo);

}

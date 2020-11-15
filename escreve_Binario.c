/*
Irá gerar o arquivo com dados depois, da extração das infromações do arquivo .csv.
Nessa versão irá escrever registro a registro. A sus segunda versão irá escrever campo a campo.


























*/

void escreve_Binario(FILE *arquivo, int cont,char nomeArquivoBinario[20]){
  
  char status = '0';
  int quantidadePessoas = cont;
  char lixo[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";

  if ((arquivo = fopen(nomeArquivoBinario, "wb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
     // fprintf(arquivo,"%s%d%s",&status,quantidadePessoas,lixo);
     fwrite(&status,sizeof(char) ,1, arquivo);
     fwrite(&quantidadePessoas,sizeof(int) ,1, arquivo);
     fwrite(lixo, sizeof(char) ,1, arquivo);

    for(int i = 0; i<cont; i++){
      /*
      if(strlen(pessoa[i].pessoa)<15){
          int tamFinal = 15 - strlen(pessoa[i].pessoa);
          for(int j = tamFinal; j < 15;j++){
            strcpy(pessoa[i].twitterPessoa, "$"); 
          }
         
        fwrite(&pessoa, sizeof(Pessoa),1,arquivo);  
      }
      */
      
      //else{
            fwrite(&pessoa,1, sizeof(Pessoa),arquivo);
            
        
       //}
       if(strlen(pessoa[i].pessoa)<1){
         // int tamFinal = 40 - strlen(pessoa[i].pessoa);
         // for(int j = tamFinal; j < 40;j++){
            char lixo = '$';
            strcpy(pessoa[i].pessoa, "$"); 

            fwrite(&pessoa,sizeof(Pessoa),1,arquivo);
          }
           
       else{
          fwrite(&pessoa,sizeof(Pessoa),1,arquivo);

         } 
       
       
    }


    fclose(arquivo);

}

//*********************Funcionalidade 3 ************************************
  
  

//Início das Buscas: nomeDoCampo valor
//1º Pelo ID:
/*
void busca_idPessoa(FILE *arquivo, FILE *arquivo2,int cont){
  char status;
  char lixo[] = "$$$$$$$";
  char lixo2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
  int quantidadePessoas = cont;
 
  int i = 0;
   if ((arquivo = fopen("index.bin","rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    if ((arquivo2 = fopen("binario.bin","rb")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }

    else{
      fread(&status, sizeof(char) ,1 ,arquivo2);
      fread(&quantidadePessoas,sizeof(int),1 ,arquivo2);      
      fread(lixo,sizeof(char),1 ,arquivo2);
      while (fread(&pessoa, sizeof(Pessoa), 1,arquivo2) != sizeof(index_p)) {
               
            printf("##### INDEX ENCONTRADO #####\n");
            printf("NUSP: %d\n", primario.numIUSP);
           
            printf("############################\n");

    } 
}
    
  fclose(arquivo);
  fclose(arquivo2);
  
}

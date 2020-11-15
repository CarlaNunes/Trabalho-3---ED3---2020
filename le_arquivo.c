/*
Irá ler o arquivo .csv e com isso, palicar os trtok e extrair os dados e coloca-los na struct correspondente.
*/

int le_arquivo(FILE *arquivo,char nomeArquivoCsv[20]){
    int i = 0;

    int bufSize = 300;
    char cabecalho[bufSize];

    if ((arquivo = fopen(nomeArquivoCsv, "r")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    } else {
#if 1 
        const char separador[2] = ",";
        char buffer[bufSize];
        fgets (cabecalho, bufSize, arquivo); 
        while( fgets (buffer, bufSize, arquivo)!=NULL ) {
            //printf("=============================\n");
            //puts(buffer);
            
            //É bom verificar se token != NULL
            char *token = strtok(buffer, separador);
            
                
                //printf("idPessoa: %s\n", token);
                pessoa[i].idPessoa = atoi(token);
         
               token = strtok(NULL, separador);
               //printf("nomePessoa: %s\n", token);
               int tam = strlen(token);
               if(tam < 3){
                  char lixo[] = "$";
                  strcpy(pessoa[i].pessoa, lixo);
                  pessoa[i].idade= atoi(token);
                  // printf("nomePessoa: %s\n", token);
                   token = strtok(NULL, separador);
                   //printf("twitterPessoa: %s\n", token);
                   strcpy(pessoa[i].twitterPessoa, token);
                                      
               }
               else{
                 
                  strcpy(pessoa[i].pessoa, token);
                  token = strtok(NULL, separador);
                  //printf("idadePessoa: %s\n", token);
                  pessoa[i].idade = atoi(token);

                  token = strtok(NULL, separador);
                 // printf("twitterPessoa: %s\n", token);
                  strcpy(pessoa[i].twitterPessoa, token);
                  
               }

            
              
             
            
            
             
            i += 1;
             
        }
        /*
        for(i = 0; i < 1200; i++){
            printf("----------------------\n");
            printf("idPessoa: %d\n", pessoa[i].idPessoa);
            printf("nomePessoa: %s\n", pessoa[i].pessoa);
            printf("idadePessoa %d \n",pessoa[i].idade);
            printf("twitterPessoa: %s\n", pessoa[i].twitterPessoa);
            printf("\n");
        }
        */
#endif
        fclose(arquivo);
    }
    return i;
}


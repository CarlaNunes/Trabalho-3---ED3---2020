
int retirar_ponto(char nomeArquivoCsv[20]){
   int i = 0;
    char parte1[10], parte2[10];
              
         strcpy(parte2,&nomeArquivoCsv[6]);
        // printf("\nString  %s \n ",parte2);
          if(strcmp(parte2,"csv") ==0){
            return 1;
          }

          else{
            return 0;
         }
         
   

                  

 }

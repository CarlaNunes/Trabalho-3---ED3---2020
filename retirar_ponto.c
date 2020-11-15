/*
Nos teste do run codes, foi notado que pode ser inserido um nome de arquivo, sem a extensão csv.
A função pega a parte final do nome inserido, correspondente a extensão dso aqruivo e verifica se é csv. Em caso positivo retorna 1 caso contrário retorna 0.
*/

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

/*
Trabalho 1 da disciplina EStrutura de Dados 3
Autoria: Carla Nunes
NºUSP: 8479343
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>

typedef int tipoChave;
typedef int rrn;
typedef char* string;

int main() {
   
    FILE *arquivo;
    int cont = 0; // número de pessoas lidas 
    int i = 0,alternativa = 0,idade = 0,idade2 = 0, id2 = 0;
    int vet[2000],vet_posi[200];
    char nomeArquivoBinario[20];
    char nomeArquivoIndice[20];
    char nomeArquivoCsv[20];
    char nome[40], aux[40],nome2[40];
    char twitter[15],twitter2[15];
    char campo[10];
    int numInseri = 0;
     int numAtu = 0;
    ///****Aqui começa a inserção dos valores de entrada para o manuseio dos arquivos
    scanf("%d",&alternativa);
    //printf("Valor da alternativa: %d",alternativa);
    scanf("%s",nomeArquivoCsv);
    scanf("%s",nomeArquivoBinario);
    scanf("%s",nomeArquivoIndice);

    cont = le_arquivo(arquivo,nomeArquivoCsv); //Número de pessoas lidas
   // printf("pessoas lidas: %d\n",cont);
    lidando_idade_negativas(arquivo,cont);
    escreve_Binario2(arquivo,cont,nomeArquivoBinario);
   // le_index(arquivo,cont);
    //Criando preenchendo a struct de indice primário
    for(i = 0; i < cont; i++){ 
      index_p[i].idPessoa = pessoa[i].idPessoa;
      index_p[i].rrn = i;
    }
    
  //Função nativa do C, para ordenar os indices
   qsort(index_p,cont,sizeof(struct index_p),comp);
   //Criando o arquivo de indice primário depois da ordenação  
   insereIndex(arquivo,cont,nomeArquivoIndice);
   
   //Funcionalidade 1, CONFERIDA!
   if(alternativa == 1){
    binarioNaTela1(nomeArquivoBinario,nomeArquivoIndice);
    //exibir_campos(arquivo,cont,nomeArquivoBinario);
   }  
   //Funcionalidade 1, CONFERIDA!
   if(alternativa == 2){
      exibir_campos(arquivo,cont,nomeArquivoBinario);
   }
   if(alternativa == 3){
     scanf("%s",campo);
      if(strcmp("id",campo)==0){//OK!
        int id = 0;
        printf("\n Por favor, insira o id: \n");
        scanf("%d",&id);
        int retorno = 0;
        busca_Binaria(index_p,cont,id);
        retorno =  busca_Binaria(index_p,cont,id);

      // printf("\n Valor de retorno: %d\n",retorno);
          if(retorno < 0){
             printf("\n Registro não encontrado!"); 
          }
          else{
            int rrn = retorno;
            //printf("\n Valor de retorno = %d \n",retorno);
            pesquisaRegistro(arquivo, rrn,cont,id,nomeArquivoBinario);
          }
      }
      if(strcmp("nome",campo)==0){//Ok, porém evitar o monte de impressão!!!!
          scanf(" %[^\n]s", nome2);
          procura_Nome(arquivo,cont,nome2,nomeArquivoBinario); 
      }   
      if(strcmp("idade",campo)==0){//Ok
        scanf("%d",&idade);
        int result;
        busca_Idade(arquivo,idade,cont,nomeArquivoBinario);
        result = busca_Idade(arquivo,idade,cont,nomeArquivoBinario);
        if(result != 0){
          printf("\n Resgistro não encontrado!!");
        }
      }
      if(strcmp("twitter",campo)==0){
        scanf("%s",twitter);
        busca_Twitter(arquivo,twitter,cont,nomeArquivoBinario);
      }
     

   }
   if(alternativa == 4){
     //Ver como eu vou ler se caso a pessoa inserir NULO e o numero de opções.
    //printf("\n Digite numero de inserções,id, nome, idade,twitter \n");
      int k = 0;
      scanf("%d",&numInseri);
      for(k = 0;k < numInseri; k++){
        
        scanf("%d",&pessoa_aux[k].idPessoa);
    //
    
    //scanf("%[^\n]s",nome2);
       scanf(" %[^\n]s", pessoa_aux[k].pessoa);
       scan_quote_string(pessoa_aux[k].pessoa);
     //scanf("%s",nome2);
       scanf("%d",&pessoa_aux[k].idade);

       scanf("%s",pessoa_aux[k].twitterPessoa);
      }
      

     cont = cont+numInseri;
     inseri_Arquivo(arquivo,numInseri,cont, nomeArquivoBinario);
      inseri_Index(arquivo,numInseri,cont,nomeArquivoIndice);
      
      exibir_campos(arquivo,cont,nomeArquivoIndice);
      qsort(index_p,cont,sizeof(struct index_p),comp);
   //Criando o arquivo de indice primário depois da ordenação 
   //Verificar ordenação antes da entrega final 
      insereIndex(arquivo,cont,nomeArquivoIndice);
      le_index(arquivo,cont,nomeArquivoIndice);
      binarioNaTela1(nomeArquivoBinario,nomeArquivoIndice);

   }
   //Fazer hoje depois de testar...
   if(alternativa == 5){//Arrumar na versão final
     //iR COLOCANDO OS CAMPOS UM A UM ATÉ FINALIZAR
     int k = 0;
     char op[10];
     scanf("%d",&numAtu);
     scanf("%s",op);
     for(k = 0; k<numAtu; k++){
       //1º Caso, se a pessoa digitar o id, primeiro
        if(strcmp("id",op)==0){//OK!
          scanf("%d",&pessoa_aux2[k].idPessoa);
          scanf("%s",op);
          if(strcmp("nome",op)==0){
             scanf(" %[^\n]s",pessoa_aux2[k].pessoa);
             scan_quote_string(pessoa_aux2[k].pessoa);
             scanf("%s",op);
             if(strcmp("idade",op)==0){
                scanf("%d",&pessoa_aux2[k].idade);
                scanf("%s",op); 
                if(strcmp("twitter",op)==0){//Quando chega aqui, ele espera mais um valor de entrada
                    scanf("%s",pessoa_aux2[k].twitterPessoa);
                }
             }
          }
        }
        //2º) Se caso digitar o nome primeiro
        if(strcmp("nome",op)==0){
          scanf(" %[^\n]s",pessoa_aux2[k].pessoa);
           //scanf("%d",&pessoa_aux2[k].idPessoa);
          scanf("%s",op);
          if(strcmp("id",op)==0){
             scanf("%d",&pessoa_aux2[k].idPessoa);
             scanf("%s",op);
             if(strcmp("idade",op)==0){
                scanf("%d",&pessoa_aux2[k].idade);
                scanf("%s",op); 
                if(strcmp("twitter",op)==0){//Quando chega aqui, ele espera mais um valor de entrada
                    scanf("%s",pessoa_aux2[k].twitterPessoa);
                }
             }
          }
          
        }   
        if(strcmp("idade",op)==0){//Ok
          scanf("%d",&pessoa_aux2[k].idade);
          scanf("%s",op);
          if(strcmp("id",op)==0){
             scanf("%d",&pessoa_aux2[k].idPessoa);
             scanf("%s",op);
             if(strcmp("nome",op)==0){
                scanf(" %[^\n]s",pessoa_aux2[k].pessoa);
                scan_quote_string(pessoa_aux2[k].pessoa);
                scanf("%s",op); 
                if(strcmp("twitter",op)==0){//Deu bom
                    scanf("%s",pessoa_aux2[k].twitterPessoa);
                }
             }
          }
        
        }
        if(strcmp("twitter",op)==0){//Deu bom
          scanf("%s",pessoa_aux2[k].twitterPessoa);
          scanf("%s",op);
          if(strcmp("id",op)==0){
             scanf("%d",&pessoa_aux2[k].idPessoa);
             scanf("%s",op);
             if(strcmp("nome",op)==0){
                scanf(" %[^\n]s",pessoa_aux2[k].pessoa);
                scan_quote_string(pessoa_aux2[k].pessoa);
                scanf("%s",op); 
                if(strcmp("idade",op)==0){
                    scanf("%d",&pessoa_aux2[k].idade);
                }
             }
          }
        }
        
     }
     atualizacao_reg(cont,numAtu);
     atualizacao_index(cont,numAtu);
     inseri_Arquivo(arquivo,numInseri,cont, nomeArquivoBinario);
      inseri_Index(arquivo,numInseri,cont,nomeArquivoIndice);
      
     // exibir_campos(arquivo,cont,nomeArquivoIndice);
      qsort(index_p,cont,sizeof(struct index_p),comp);
   //Atualizando o arquivo de indice primário depois da ordenação 
   //Verificar ordenação antes da entrega final 
      insereIndex(arquivo,cont,nomeArquivoIndice);
      //le_index(arquivo,cont,nomeArquivoIndice);
      binarioNaTela1(nomeArquivoBinario,nomeArquivoIndice);
 
     
   }
  
   
   
    return (0);


}


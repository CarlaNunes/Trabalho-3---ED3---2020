//************Funcionalidade 5******************
/*
Nessa, iremos atualizar os dados desejadfos no arquivo de dados. Do mesmo modo que a função 'atualiza_index.
*/
void atualizacao_reg(int cont, int numAtu ){
  int i = 0;
  for(i = 0; i < cont; i++){
    for(int k; k < numAtu; k++)
     if(pessoa[i].idPessoa == pessoa_aux2[k].idPessoa){
       pessoa[i].idPessoa = pessoa_aux2[k].idPessoa;
       strcpy(pessoa[i].pessoa,pessoa_aux2[i].pessoa);
       pessoa[i].idade = pessoa_aux2[k].idade;
       strcpy(pessoa[i].twitterPessoa,pessoa_aux2[i].twitterPessoa);
    }
  }

}

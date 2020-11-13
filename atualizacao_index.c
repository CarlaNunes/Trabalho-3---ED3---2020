
void atualizacao_index(int cont, int numAtu){
 int i = 0;
  for(i = 0; i < cont; i++){
    for(int k; k < numAtu; k++)
      if(index_p[i].idPessoa == pessoa_aux2[k].idPessoa){
        index_p[i].idPessoa = pessoa_aux2[k].idPessoa;
      }
  }

}

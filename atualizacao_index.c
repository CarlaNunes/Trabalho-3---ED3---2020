
/*
A função, integra a funcionalidade 5, que é a de atualização de registros.
Quando o usúario (ou outro) inserir os dados que deseja atualizar, eles, são armazenados em uma struct auxiliar(auxiliar2)
para que assim, seja trasnferido para a struct original e inserida no arquivo de indice primário.(index binário).

*/

void atualizacao_index(int cont, int numAtu){
 int i = 0;
  for(i = 0; i < cont; i++){
    for(int k; k < numAtu; k++)
      if(index_p[i].idPessoa == pessoa_aux2[k].idPessoa){
        index_p[i].idPessoa = pessoa_aux2[k].idPessoa;
      }
  }

}

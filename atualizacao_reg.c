//************Funcionalidade 5******************
/*
Não esquecer, que ao final da funcionalidade :
1)Escrever tudo em arquivo;
2)Ordenar;
3)Escrever no index;
4)BinarioNa Tela
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

//A função abaixo, tem como objetivo. Completar com zero idades inválidas (-1)
void lidando_idade_negativas(FILE *arquivo,int cont){
  int i = 0, nova_idade = 0;
  for(i = 0; i < cont; i++){
    if(pessoa[i].idade < 0){
      pessoa[i].idade = 0;
     // printf("\n Idade: %d",pessoa[i].idade);
    }
    else{
      //printf("\n Idade sem mudanças: %d",pessoa[i].idade);
    }
  }
  //Testando as idadePessoas

}

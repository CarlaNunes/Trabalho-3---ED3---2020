//------Início pesquisa por ID, usando o index e o arquivo de dados



  //Usar se PRECISAR
  //Fonte da versão original: https://blog.pantuza.com/artigos/busca-binaria
  //Função ok
int busca_Binaria(Index_p index_p[2000], int cont, int id)
{
   int direita, esquerda, meio, encontrado = 0,i = 0;
   direita = cont-1 ;
   esquerda = 0;
   while (esquerda <= direita && !encontrado) {
    meio = (direita + esquerda) / 2;
    if (index_p[meio].idPessoa == id){
      encontrado = 1;
      return index_p[meio].rrn;
      //return index_p[i].rrn; SE DER ERRO NO RESTO DO PROGRAMA DESCOMENTAR ESSA LINHA!!
    }
	  else if (id < index_p[meio].idPessoa){
      direita = meio - 1;
      //return index_p[i].rrn;
    }
	    
    else if (id > index_p[meio].idPessoa){
      esquerda = meio + 1;
     // return index_p[i].rrn;
    }
	  i++;
   }
   if (encontrado){
     return meio;
   }
    
   else{
     return -1;
   }
    
}
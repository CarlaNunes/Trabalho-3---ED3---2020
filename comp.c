int comp(const void *p, const void *q) {
  struct index_p *a = (struct index_p*)p;
  struct index_p *b = (struct index_p*)q;

  if( a->idPessoa > b->idPessoa )
    return 1;
  else if (b->idPessoa < a->idPessoa)
    return -1;
  else
    return 0;
}

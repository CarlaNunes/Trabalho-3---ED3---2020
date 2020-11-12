//Função fornecida pelos monitores da disciplina
void binarioNaTela1(char nomeArquivoBinario[20], char nomeArquivoIndice[20]) {

	/* Use essa função para comparação no run.codes. Lembre-se de ter fechado (fclose) o arquivo anteriormente.
	*  Ela vai abrir de novo para leitura e depois fechar (você não vai perder pontos por isso se usar ela). */

	unsigned long i, cs;
	unsigned char *mb;
	FILE *fs, *fi;
	size_t fl;
	if(nomeArquivoBinario == NULL || !(fs = fopen(nomeArquivoBinario, "rb"))) {
		fprintf(stderr, "ERRO NA FUNÇÃO BINARIO NA TELA. Não se esqueça do fclose e verifique se passou o argumento corretamente!\n");
		return;
	}
	if(nomeArquivoIndice == NULL || !(fi = fopen(nomeArquivoIndice, "rb"))) {
		fprintf(stderr, "ERRO NA FUNÇÃO BINARIO NA TELA. Não se esqueça do fclose e verifique se passou o argumento corretamente!\n");
		return;
	}
	fseek(fs, 0, SEEK_END);
	fl = ftell(fs);
	fseek(fs, 0, SEEK_SET);
	mb = (unsigned char *) malloc(fl);
	fread(mb, 1, fl, fs);
	fclose(fs);
	cs = fl;
	for(i = 0; i < fl; i++) {
		cs += (unsigned long) mb[i];
	}
	fseek(fi, 0, SEEK_END);
	fl = ftell(fi);
	fseek(fi, 0, SEEK_SET);
	mb = (unsigned char *) realloc(mb, fl);
	fread(mb, 1, fl, fi);
	fclose(fi);
	cs += fl;
	for(i = 0; i < fl; i++) {
		cs += (unsigned long) mb[i];
	}
	printf("%lf\n", (cs / (double) 100));
	free(mb);
}

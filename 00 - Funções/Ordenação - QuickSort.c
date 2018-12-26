void quickSortInt(int vetor[TAM], int inicio, int fim) {
    int pivo, esq, dir, meio, aux;

    esq = inicio;
    dir = fim;

    pivo = vetor[(esq + dir) / 2];

    while(dir > esq) {
        while(vetor[esq] < pivo)
            esq = esq + 1;

        while(vetor[dir] > pivo)
            dir = dir - 1;

        if(esq <= dir) {
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }
    }
    if(inicio < dir)
        quickSortInt(vetor, inicio, dir);

    if(esq < fim)
         quickSortInt(vetor, esq, fim);
}
/* ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void quickSortString(char matriz[][TAM], int esq, int dir) {
  int i, j;
  char *pivo, temp[TAM];

  i = esq;
  j = dir;
  pivo = matriz[(esq + dir) /2];

  do {
    while((strcmp(matriz[i],pivo) < 0) && (i < dir))
       i++;

    while((strcmp(matriz[j],pivo) > 0) && (j > esq))
        j--;

    if(i <= j) {
      strcpy(temp, matriz[i]);
      strcpy(matriz[i], matriz[j]);
      strcpy(matriz[j], temp);
      i++;
      j--;
   }

  } while(i <= j);

  if(esq < j) {
     quickSortString(matriz, esq, j);
  }
  if(i < dir) {
     quickSortString(matriz, i, dir);
  }
}

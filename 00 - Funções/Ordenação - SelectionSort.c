void selection_sort(int *vet, int tam){
    int posicaoDoMenorValor, aux, i, j;

    for(i = 0; i < tam; i++){
        posicaoDoMenorValor = i;

        for(j = i + 1; j < tam; j++){
            if(vet[j] < vet[posicaoDoMenorValor]){
                posicaoDoMenorValor = j;
            }
        }

        if(posicaoDoMenorValor != i){
            aux = vet[i];
            vet[i] = vet[posicaoDoMenorValor];
            vet[posicaoDoMenorValor] = aux;
        }
    }
}


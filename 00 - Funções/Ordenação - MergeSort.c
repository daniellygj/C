void merge(int *vet, int esq, int meio, int dir) {
    int n1 = esq, n2 = meio+1, comAux = 0, vetEsq[dir-esq+1];


    while(n1 <= meio && n2 <= dir){
        if(vet[n1] < vet[n2])
            vetEsq[comAux] = vet[n1++];
        else
            vetEsq[comAux] = vet[n2++];
        comAux++;
    }

    while(n1 <= meio) {
        vetEsq[comAux] = vet[n1++];
        comAux++;
    }

    while(n2 <= dir) {
        vetEsq[comAux] = vet[n2++];
        comAux++;
    }

    for(comAux = esq; comAux <= dir; comAux++)
        vet[comAux] = vetEsq[comAux-esq];
}

void mergeSort(int *vet, int esq, int dir){
    if (esq < dir) {
        int meio = esq + (dir-esq) /2;

        mergeSort(vet, esq, meio);
        mergeSort(vet, meio+1, dir);
        merge(vet, esq, meio, dir);
    }
}




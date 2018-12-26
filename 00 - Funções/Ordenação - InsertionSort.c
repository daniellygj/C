void InsertionSort(int *vet, int tam) {
    int aux;
    int j;
    for (int i=1; i < tam; i++){
        aux = vet[i];
        for (j=i; j > 0 && aux < vet[j -1]; j--)
            vet[j] = vet[j -1];
        vet[j] = aux;
    }
}

void InsertionSortStruct(struct X *v, int n){
    int i, j;
    struct X aux;
 
    for (i = 1; i < n; i++){
        aux = v[i];
        for (j = i; (j > 0) && (strcmp (aux.Y, v[j - 1].Y) < 0); j--)
            v[j] = v[j - 1];
        v[j] = aux;
 
    }
}

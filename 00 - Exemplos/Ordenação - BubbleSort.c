void BubbleSort(int *vet, int tam) {
    for (int i = 1; i < tam; i++) {
        bool troca = 0;
        for (int j = tam - 1; j >= i; j--) {
            if (vet[j - 1] > vet[j]) {
                vet[j - 1] ^= vet[j];
                vet[j] ^= vet[j - 1] ;
                vet[j - 1] ^= vet[j];

                troca = 1;
            }
        }
        if (!troca) {
            return;
        }
    }
}

void BubbleSortStruct(XX *vet, int Tam) {
    for (int i=0; i<Tam; i++) {
        for (int j=i; j<Tam; j++) {
            if (strcmp(vet[j].YY, vet[i].YY) < 0) {
                XX temp = vet[j];
                vet[j] = vet[i];
                vet[i] = temp;
            }
        }
    }
}

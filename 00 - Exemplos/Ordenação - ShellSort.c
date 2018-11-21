void shellSort(int *vet, int tam) {
    int i , j , valor;
    int aux = 1;

    while(aux < tam)
        aux = 3 * aux + 1;

    while ( aux > 1) {
        aux /= 3;
        for(i=aux; i<tam; i++) {
            valor = vet[i];
            j = i - aux;

            while (j >= 0 && valor < vet[j]) {
                vet[j + aux] = vet[j];
                j -= aux;
            }
            vet[j + aux] = valor;
        }
    }
}

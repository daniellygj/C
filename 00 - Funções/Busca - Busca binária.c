int buscaBinaria(int vet[], int n, int valor) {
    int i = 0;
    int f = n -1;
    int p = f / 2;

    while (vet[p] != valor) {
        if (vet[p] > valor)
            f = p;
        else
            i = p;

        p = (i + f) / 2;
    }

    return p;
}
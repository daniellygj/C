const int MAX = 10;

void imprime(int t, int *v);
bool apagar(int n, int *t, int *v);

int main() {
    int  t;
    int  v[MAX];
    char o;
    int  n;

    printf("INSERCAO\n");
    printf("Entre com um inteiro diferente de 0 enquanto quiser inserir no vetor:\n");
    t = 0;

    scanf(" %d", &n);
    while (t < MAX - 1 && n != 0) {
        v[t] = n;
        t++;
        scanf(" %d", &n);
    }

    printf("VETOR: ");
    imprime(t, v);
    printf("Qual valor deseja retirar do vetor?\n");
    scanf(" %d", &n);
    if (apagar(n, &t, v)) {
        printf("%d foi apagado com sucesso!\n", n);
        printf("VETOR: ");
        imprime(t, v);
    } else printf("%d NAO ESTA NO VETOR!\n", n);
}

void imprime(int t, int *v) {
    for(int i = 0; i < t; i++) printf("%d ", v[i]);
    printf("\n");
}

bool apagar(int n, int *t, int *v) {
    for (int i = 0; i < *t; i++ ) {
        if (v[i] == n) {
            *t -= 1;
            while (i < *t) {
                v[i] = v[i + 1];
                i++;
            }
            return true;
        }
    }
    return false;
}


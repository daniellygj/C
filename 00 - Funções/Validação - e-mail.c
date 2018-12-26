void ValidarEmail(char *email, int tam;) {
    int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

    for (i = 0; i < tam; i++) {
        char c = email[i];
        if(c == '@') {
            if (arroba) break;
            arroba = 1;
            if (i < 3) break;
        }
        else if (arroba) {
            if (ponto) depoisPonto++;
            else if(c == '.') {
                ponto = 1;
                if (antesPonto < 3) break;
            } else antesPonto++;
        }
    }

  if (i == tam && depoisPonto > 1) printf("Valido");
  else printf("Invalido");
}

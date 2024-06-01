#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char sigla[4];
    char cidade[51];
    char pais[31];
    float taxa;
    int capacidade;
} Aeroporto;

void lerAeroporto(Aeroporto *a) {
    printf("Sigla: ");
    scanf("%s", a->sigla);
    printf("Cidade: ");
    scanf("%s", a->cidade);
    printf("País: ");
    scanf("%s", a->pais);
    printf("Taxa: ");
    scanf("%f", &a->taxa);
    printf("Capacidade: ");
    scanf("%d", &a->capacidade);
}

void escreverAeroporto(Aeroporto a) {
    printf("Sigla: %s\n", a.sigla);
    printf("Cidade: %s\n", a.cidade);
    printf("País: %s\n", a.pais);
    printf("Taxa: %.2f\n", a.taxa);
    printf("Capacidade: %d\n", a.capacidade);
}

int main() {
    int n;
    printf("Digite o número de aeroportos: ");
    scanf("%d", &n);

    Aeroporto *aeroportos = (Aeroporto *)malloc(n * sizeof(Aeroporto));
    for (int i = 0; i < n; i++) {
        printf("Aeroporto %d:\n", i+1);
        lerAeroporto(&aeroportos[i]);
    }

    printf("\nDados dos aeroportos:\n");
    for (int i = 0; i < n; i++) {
        escreverAeroporto(aeroportos[i]);
    }

    free(aeroportos);
    return 0;
}

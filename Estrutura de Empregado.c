#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char data_nascimento[11];
    char RG[12];
    char data_admissao[11];
    float salario;
} Empregado;

void lerEmpregado(Empregado *e) {
    printf("Nome: ");
    scanf("%s", e->nome);
    printf("Data de Nascimento (dd/mm/aaaa): ");
    scanf("%s", e->data_nascimento);
    printf("RG: ");
    scanf("%s", e->RG);
    printf("Data de Admissão (dd/mm/aaaa): ");
    scanf("%s", e->data_admissao);
    printf("Salário: ");
    scanf("%f", &e->salario);
}

void escreverEmpregado(Empregado e) {
    printf("Nome: %s\n", e.nome);
    printf("Data de Nascimento: %s\n", e.data_nascimento);
    printf("RG: %s\n", e.RG);
    printf("Data de Admissão: %s\n", e.data_admissao);
    printf("Salário: %.2f\n", e.salario);
}

int main() {
    int n;
    printf("Digite o número de empregados: ");
    scanf("%d", &n);

    Empregado *empregados = (Empregado *)malloc(n * sizeof(Empregado));
    for (int i = 0; i < n; i++) {
        printf("Empregado %d:\n", i+1);
        lerEmpregado(&empregados[i]);
    }

    printf("\nDados dos empregados:\n");
    for (int i = 0; i < n; i++) {
        escreverEmpregado(empregados[i]);
    }

    free(empregados);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    int aulas;
} aluno_t;

int main() {
    aluno_t *a1 = malloc(sizeof(aluno_t));
    if (a1 == NULL) {
        printf("Erro de alocacao");
        return 1;
    }
    printf("Digite nome do aluno:\n");
    fgets(a1->nome, 100, stdin);
    printf("Digite a nota:\n");
    scanf("%f", &a1->nota);
    printf("Digite as aulas frequentadas:\n");
    scanf("%d", &a1->faltas);
    printf("Digite quantas aulas totais:\n");
    scanf("%d", &a1->aulas);
    float freq = (float)(a1->faltas * 100) / a1->aulas;
    if (a1->nota >= 7 && freq >= 75) {
        printf("%s: APROVADO\n", a1->nome);
    } else {
        printf("%s: REPROVADO\n", a1->nome);
    }
    free(a1);
    return 0;
}


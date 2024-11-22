#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
char nome[100];
int faltas;
float nota;
}aluno_t;

int main(){
	aluno_t *a1 = (aluno_t *)malloc(sizeof(aluno_t));
	printf("Digite o nome do aluno:\n");
	fgets(a1->nome,100,stdin);
	printf("Digite a notas:\n");
	scanf("%f",&a1->nota);
	printf("Digite as faltas:\n");
	scanf("%d",&a1->faltas);
	printf("Aluno: %s\n",a1->nome);
	printf("Nota; %.2f\n",a1->nota);
	printf("Faltas: %d\n",a1->faltas);
	if(a1->nota>7 && a1->faltas<4){
		printf("APROVADO!!\n");
	}else{
		printf("REPROVADO :(\n");
	}
	free(a1);

	return 0;
}


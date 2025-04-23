#include <stdio.h>

int main(){

    float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota5 = 0, nota6 = 0, nota7 = 0, nota8 = 0, nota9 = 0, nota10 = 0;
    float media = 0;
    int i = 0;

    printf("Nota do primeiro aluno: ");
    scanf("%f", &nota1);
    printf("Nota do segundo aluno: ");
    scanf("%f", &nota2);
    printf("Nota do terceiro aluno: ");
    scanf("%f", &nota3);
    printf("Nota do quarto aluno: ");
    scanf("%f", &nota4);
    printf("Nota do quinto aluno: ");
    scanf("%f", &nota5);
    printf("Nota do sexto aluno: ");
    scanf("%f", &nota6);
    printf("Nota do setimo aluno: ");
    scanf("%f", &nota7);
    printf("Nota do oitavo aluno: ");
    scanf("%f", &nota8);
    printf("Nota do nono aluno: ");
    scanf("%f", &nota9);
    printf("Nota do decimo aluno: ");
    scanf("%f", &nota10);

    media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8 + nota9 + nota10) / 10;

    printf("\nA media da turma e: %.2f\n", media);

    if (nota1 >= media) i++;
    if (nota2 >= media) i++;
    if (nota3 >= media) i++;
    if (nota4 >= media) i++;
    if (nota5 >= media) i++;
    if (nota6 >= media) i++;
    if (nota7 >= media) i++;
    if (nota8 >= media) i++;
    if (nota9 >= media) i++;
    if (nota10 >= media) i++;

     printf("Numero de alunos com nota acima ou igual a media: %d\n", i);

}

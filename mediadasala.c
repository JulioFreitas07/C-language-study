#include <stdio.h>

int main(){

    // calcular média

    //quantidade de alunos da sala
    int qnt_alunos;
    printf("informe a quantidade de alunos: ");
    scanf("%d", &qnt_alunos);
    
    //nota por aluno
    //somar todas as notas
    float nota;
    float soma;
    int contador = 1;
    while (qnt_alunos >= contador)
    {
        printf("informe a nota do aluno %d: ", contador);
        scanf("%f", &nota);
        soma = soma + nota;
        contador++;
    }
    //dividir a soma das notas pela quantidade de alunos da sala
    float media = soma/qnt_alunos;
    printf("A média final da sala é %f\n", media);
    return 0;
}

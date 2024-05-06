#include <stdio.h>
#include <stdlib.h>

//variáveis: int a, int b, int opcao
float a;
float b;
int opcao;
float resultado;


float soma()
{
    return a + b;
}

float subtracao()
{
    return a - b;
}

float divisao()
{
    return a / b;
}

float multiplicacao()
{
    return a * b;
}

//informe os valores
void informarValor()
{
    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
}


//exibir as opções
int menu()
{
    printf("Olá! selecione a opção que você deseja!\n");
    printf("1. somar\n");
    printf("2. subtrair\n");
    printf("3. dividir\n");
    printf("4. mulplicar\n");
    printf("5 Sair\n");
    scanf("%d", &opcao);
    
    return 0;
}


float chamarMetodos()
{
    //método para chamar a operação

    do
    {
        menu();
        switch(opcao)
        {
            case 1:
                informarValor();
                resultado = soma();
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                informarValor();
                resultado = subtracao();
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                informarValor();
                resultado = divisao();
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                informarValor();
                resultado = multiplicacao();
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                opcao = 5;
                break;
        }
    } while(opcao!=5);

    return 0;

}

int main()
{
    chamarMetodos();
    system("clear");
    return 0;
}
#include <stdio.h>

int main()
{

    //imprimir valores pares//

    //qual o range da base de valores?: 1 a 100

    //como eu verifico se os valores são pares?: o resto da razão deles por 2 deve ser igual a zero

    //como eu exibo esses valores na tela?: quando o valor for par eu apenas faço o print dele

    //variáveis: int range
    int range = 100;
    //estrutura de repetição-> "for" porque não preciso criar outra variável como contador fora da estrutura
    for(int i = 1; range >= i; i++)
    {
        //estrutura de condição -> "if" porque se não for nuḿero par, eu não exibo o valor no output
        if(i%2==0) //ou eu posso inserir na condição !(i%2), porque se o resto for zero temos o booleano Falso, mas tendo em vista que temos o operador NOT "!"o zero é convertido para 1, o que tonar a condição verdadeira e printa o valor
        {
            printf("O valor %d é par\n", i);
        }
    }
    return 0;
}
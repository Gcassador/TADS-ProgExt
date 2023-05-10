/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct {
    int idade;
    char nome[255];
} Pessoa;

void ImprimePessoa(Pessoa p)
{
    printf("%s tem %d anos\n", p.nome, p.idade);
}

int main()
{
    Pessoa pessoa[2];
    
    printf("Digite o Nome da primeira pessoa: ");
    scanf("%s",pessoa[0].nome);
    printf("Digite a Idade da primeira pessoa: ");
    scanf("%d",&pessoa[0].idade);
    
    printf("Digite o Nome da segunda pessoa: ");
    scanf("%s",pessoa[1].nome);
    printf("Digite a Idade da segunda pessoa: ");
    scanf("%d",&pessoa[1].idade);
    
    ImprimePessoa(pessoa[0]);
    ImprimePessoa(pessoa[1]);

    return 0;
}

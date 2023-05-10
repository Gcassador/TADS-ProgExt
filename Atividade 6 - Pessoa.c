/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct {
    int idade;
    char profissao[255];
    char nome[255];
} Pessoa;

void ImprimePessoa(Pessoa p)
{
    printf("Olá, %s sua profissão é %s e você tem %d anos", p.nome, p.profissao, p.idade);
}

int main()
{
    Pessoa pessoa;
    
    printf("Digite seu Nome: ");
    scanf("%s",pessoa.nome);
    printf("Digite sua Profissão: ");
    scanf("%s",pessoa.profissao);
    printf("Digite sua Idade: ");
    scanf("%d",&pessoa.idade);
    
    ImprimePessoa(pessoa);

    return 0;
}

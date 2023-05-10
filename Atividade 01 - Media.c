/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota1 = -1, nota2 = -1, media;
    
    while(nota1 < 0 || nota1 > 10)
    {
        printf("Digite a nota da primeira prova (1 - 10)");
        scanf("%f", &nota1);
    }
    
    while(nota2 < 0 || nota2 > 10)
    {
        printf("Digite a nota da segunda prova (1 - 10)");
        scanf("%f", &nota2);
    }
    
    media = (nota1 + nota2) / 2;
    
    printf("A media do Aluno é: %.2f e ele está %s", media, media >= 7 ? "Aprovado" : "Reprovado");

    return 0;
}

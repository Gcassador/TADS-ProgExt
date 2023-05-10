/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero[3];
    
    printf("Digite um número: ");
    scanf("%d", &numero[0]);
    
    printf("Digite outro número: ");
    scanf("%d", &numero[1]);
    
    printf("Digite o ultimo número: ");
    scanf("%d", &numero[2]);
    
    int maiorNumero = numero[0];
    
    for(int i; i < 3; i++)
    {
        if(maiorNumero < numero[i])
            maiorNumero = numero[i];
    }
    
    printf("O Maior numero digitado foi: %d", maiorNumero);

    return 0;
}

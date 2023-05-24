/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    if(numero> 0)
    {
        printf("A raiz quadrada é: %.2f", sqrt(numero));
    }else
    {
        printf("O numero ao quadrado é: %.2f", numero * numero);
    }
    
}

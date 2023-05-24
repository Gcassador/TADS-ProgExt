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
        printf("O número digitado ao quadrado: %.2f\n", numero * numero);
        printf("A raiz quadrada do número digitado: %.2f", sqrt(numero));
    }
    
}

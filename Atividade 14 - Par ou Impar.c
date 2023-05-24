/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    
    printf("Digite um numero");
    scanf("%d", &numero);
    
    if(numero % 2 == 0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
    
}

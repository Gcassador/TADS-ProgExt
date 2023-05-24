/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    
    printf("Digite um numero: ");
    scanf("%d",&num1);
    
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    
    if(num1 > num2)
    {
        printf("O maior numero é: %d, e a diferença de ambos é: %d ",num1, num1 - num2);
    }
    else{
        printf("O maior numero é: %d, e a diferença de ambos é: %d ",num2, num2 - num1);
    }
    
    
    
}

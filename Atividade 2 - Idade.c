/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade;
    
    printf("digite sua idade: ");
    
    scanf("%d",&idade);
    
    printf("%s", idade >= 18 ? "Maior de idade" : "Menor de idade");

    return 0;
}

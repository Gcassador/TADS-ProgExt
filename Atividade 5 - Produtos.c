/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int CodigoProduto;
    
    printf("Digite o codigo do Produto: ");
    scanf("%d", &CodigoProduto);
    
    switch(CodigoProduto)
    {
        case 1:
            printf("Alimento não-perecível");
        break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecível");
        break;
        case 5:
        case 6:
            printf("Vestuário");
        break;
        case 7:
            printf("Higiene pessoal");
        break;
        case 8:
        case 9:
        case 10:
            printf("Utensílios domésticos");;
        break;
        default:
            printf("Código invalido");
        break;
    }

    return 0;
}

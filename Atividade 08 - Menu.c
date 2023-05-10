/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char bebida[255];
    int idBebida = 0;
    
    printf("MENU\n\n1. Agua\n2. Refrigerante\n3. Suco\n\nDigite o numero correspondente da bebida que você deseja: ");
    scanf("%d",&idBebida);
    
    while(idBebida < 1 || idBebida >3)
    {
        printf("Numero digitado não correspondente, Digite novamente: ");
        scanf("%d",&idBebida);
        
    }
    
    switch(idBebida)
    {
        case 1:
            strcpy(bebida,"Agua");
        break;
        case 2:
            strcpy(bebida,"Refrigerante");
        break;
        case 3:
            strcpy(bebida,"Suco");
        break;
    }
    
    printf("\nVocê escolheu: %s!",bebida);
}

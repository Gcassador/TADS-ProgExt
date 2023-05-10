/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero = 0, numeroUsuario;
    printf("Digite um numero: ");
    scanf("%d",&numeroUsuario);
    
    while(numero <= numeroUsuario){
        printf("%d\n",numero);
        numero++;
    }

    return 0;
}

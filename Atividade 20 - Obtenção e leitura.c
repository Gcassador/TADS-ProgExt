// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valor[6];
    int soma= 0;
    int cont;
    
    printf("Digite 6 numeros:\n");
    
    for(cont = 0; cont < 6; cont++)
    {
        printf("%d: ", cont+1);
        scanf("%d",&valor[cont]);
    }
    
    printf("\nOs numero digitados, foram:\n");
    
    for(cont = 0; cont < 6; cont++)
    {
        printf("%d: %d \n",cont+1, valor[cont]);
    }
    
}
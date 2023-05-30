// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valor[10];
    int soma= 0;
    int cont;
    
    printf("Digite 10 numeros:\n");
    
    for(cont = 0; cont < 10; cont++)
    {
        printf("%d: ", cont+1);
        scanf("%d",&valor[cont]);
        soma = soma + valor[cont];
    }
    
    printf("a media deles: %d", soma / 10);
}
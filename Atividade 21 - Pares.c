// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valor[10];
    int pares= 0;
    int cont;
    
    printf("Digite 10 numeros:\n");
    
    for(cont = 0; cont < 10; cont++)
    {
        printf("%d: ", cont+1);
        scanf("%d",&valor[cont]);
        
        if(valor[cont] % 2 == 0){
            pares = pares + 1;
        }
    }
    
    printf("\nDos numero digitados, %d são pares:\n", pares);
    
}
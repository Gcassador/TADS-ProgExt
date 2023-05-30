// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int valor[10];
    int maior= 0;
    int menor= 0;
    int cont;
    
    printf("Digite 10 numeros:\n");
    
    for(cont = 0; cont < 10; cont++)
    {
        printf("%d: ", cont+1);
        scanf("%d",&valor[cont]);
        maior = maior < valor[cont] || maior == 0 ? valor[cont] : maior;
        menor = menor > valor[cont] || menor == 0 ? valor[cont] : menor;
    }
    
    printf("\nDos numero digitados, %d é o maior e %d é o menor\n", maior, menor);
    
}
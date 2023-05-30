// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int contador = 1;
    printf("While: \n\n");
    
    while(contador <= 100)
    {
        printf("%d ", contador);
        contador++;
    }
    contador = 1;
    printf("\n\nDo While: \n\n");
    
    do{
        printf("%d ", contador);
        contador++;
    }while(contador <= 100);
    
    contador = 1;
    printf("\n\nFor: \n\n");
    
    
    for(contador = 1; contador <= 100; contador++){
        printf("%d ", contador);
    }
}
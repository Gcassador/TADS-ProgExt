
#include <stdio.h>

int main() {
    
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    
    printf("\nMaior numero: ");
    
    if(num1 > num2)
        printf("%d", num1);
    else
        printf("%d", num2);
    
    return 0;
}
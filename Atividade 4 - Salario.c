/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valorSalario;
    int TempoEmAnos;
    
    printf("Digite o Salario do funcionario: ");
    scanf("%f",&valorSalario);
    
    printf("Digite o tempo de trabalho em anos: ");
    scanf("%d",&TempoEmAnos);
    
    if(TempoEmAnos >= 5)
    {
        valorSalario = valorSalario + (valorSalario * 0.2);   
    }
    else
    {
        valorSalario = valorSalario + (valorSalario * 0.1);
    }
    
    printf("O Valor do Salario com o reajuste de %d\% é de: R$%.2f", TempoEmAnos >= 5 ? 20: 10, valorSalario);
    

    return 0;
}

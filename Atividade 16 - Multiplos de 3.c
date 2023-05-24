/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1 = 1, count = 0;
    
    while(count < 5)
    {
        if(num1 % 3 == 0)
        {
            printf("%d\n", num1);
            count++;
        }
        
        num1++;
    }
    
    
}

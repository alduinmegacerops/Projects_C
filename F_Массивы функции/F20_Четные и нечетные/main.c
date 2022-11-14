#include <stdio.h>

#define MAXTELEMENTS 10

void evenNotEven(int*, int);

int main()
{
    int inputNumber[MAXTELEMENTS];
    
    for(int i = 0; i < MAXTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    evenNotEven(inputNumber, MAXTELEMENTS);
    
    for(int i = 0; i < MAXTELEMENTS; i++)
        printf("%d ", inputNumber[i]);    
    
    return 0;
}

void evenNotEven(int number[], int count)
{
    int countEven = 0; int countNotEven = 0, multiplicationNumber = 1, temp = 1;
    
    for(int i = 0; i < count; i++)
        if(number[i] % 2 == 0)
            countEven++;
        else
            countNotEven++;
            
    for(int i = 0; i < count; i++)
    {
        if(countEven > countNotEven && number[i] % 2 != 0)
        {
            while(number[i] != 0)
            {
                temp = number[i] % 10;
                
                if(temp % 2 != 0)
                    multiplicationNumber *= temp;
                
                number[i] /= 10;
            }
            
            number[i] = multiplicationNumber;
            multiplicationNumber = 1;
        }
        
        if(countEven <= countNotEven && number[i] % 2 == 0)
        {
            while(number[i] != 0)
            {
                temp = number[i] % 10;
                
                if(temp % 2 == 0)
                    multiplicationNumber *= temp;
                
                number[i] /= 10;
            }
            
            number[i] = multiplicationNumber;
            multiplicationNumber = 1;
        }  
    }
}


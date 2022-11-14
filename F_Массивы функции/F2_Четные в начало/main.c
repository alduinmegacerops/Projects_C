#include <stdio.h>

#define AMOUNTELEMENTS 20

void evenNotEven(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    evenNotEven(inputNumber, AMOUNTELEMENTS - 1);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void evenNotEven(int number[AMOUNTELEMENTS], int count)
{
    int temp, countNotEven = 1;
    
    for(int i = 0; i <= count; i++ )
        if(number[i] % 2 != 0)
            countNotEven++;
    
    for(int j = 0; j < countNotEven - 1; j++)
        for(int i = 0; i < count; i++)
            if(number[i] % 2 != 0)
            {
                temp = number[i];
                number[i] = number[i + 1];
                number[i + 1] = temp;
            }
}


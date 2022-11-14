#include <stdio.h>

#define AMOUNTELEMENTS 10

void sortLastDigit(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    sortLastDigit(inputNumber, AMOUNTELEMENTS);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void sortLastDigit(int number[AMOUNTELEMENTS], int count)
{
    int temp = 0;
    
    for(int i = 0; i < count; i++)
    {
        for (int j = count - 1; j > i; j--)
        {
            if(number[j] % 10 < number[j - 1] % 10)
            {
                temp = number[j - 1];
                number[j - 1] = number[j];
                number[j] = temp;
            }
        }
    }
}

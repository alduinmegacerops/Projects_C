#include <stdio.h>

#define AMOUNTELEMENTS 10

void sortHalf(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    sortHalf(inputNumber, AMOUNTELEMENTS);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void sortHalf(int number[AMOUNTELEMENTS], int count)
{
    int temp = 0;
    
    for(int firstFactor = 0, secondFactor = 1; firstFactor < 2; firstFactor++, secondFactor++)
    {
        for(int i = 0 + firstFactor * count / 2; i < secondFactor * count / 2; i++)
        {
            for (int j = secondFactor * count / 2 - 1; j > i; j--)
            {
                if(number[j] < number[j - 1] && firstFactor == 0)
                {
                    temp = number[j - 1];
                    number[j - 1] = number[j];
                    number[j] = temp;
                }
                else if(number[j] > number[j - 1] && firstFactor == 1)
                {
                    temp = number[j - 1];
                    number[j - 1] = number[j];
                    number[j] = temp;
                }
            }
        }
    }
}

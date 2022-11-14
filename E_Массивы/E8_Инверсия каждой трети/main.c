#include <stdio.h>

#define AMOUNTELEMENTS 12

void reverseThird(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    reverseThird(inputNumber, AMOUNTELEMENTS);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void reverseThird(int number[AMOUNTELEMENTS], int count)
{

    int swap, firstFactor = 0, secondFactor = 1;
    
    for(firstFactor, secondFactor; firstFactor < 3; firstFactor++, secondFactor++)
    {
        for(int i = 0; i < count / 6; i++)
        {
            swap = number[i + firstFactor * count / 3];
            number[i + firstFactor * count / 3] = number[secondFactor * count / 3 - 1 - i];
            number[secondFactor * count / 3 - 1 - i] = swap;
        }
    }
}

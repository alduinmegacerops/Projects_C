#include <stdio.h>

#define AMOUNTELEMENTS 10

void cyclicRightShift(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    cyclicRightShift(inputNumber, AMOUNTELEMENTS);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void cyclicRightShift(int number[AMOUNTELEMENTS], int count)
{

    int temp = number[9];
    
    for(int i = count - 1; i >= 0; i--)
    {
        number[i] = number[i - 1];
    }
    
    number[0] = temp;
}

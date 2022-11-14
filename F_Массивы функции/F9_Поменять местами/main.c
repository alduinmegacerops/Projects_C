#include <stdio.h>
#include <stdlib.h>

#define MAXELEMENTS 10

void maxNegativeSwap(int*, int);

int main()
{
    int inputNumber[MAXELEMENTS];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    maxNegativeSwap(inputNumber, MAXELEMENTS);
    
    for(int i = 0; i < MAXELEMENTS; i++)
        printf("%d ", inputNumber[i]);

    return 0;
}

void maxNegativeSwap(int number[], int count)
{
    int max = -2147483647, swap, numberMax = 0, flag = 0;
    
    for(int i = 0; i < count; i++)
        if(number[i] < 0 && number[i] > max)
        {
            max = number[i];
            numberMax = i;
            flag = 1;
        }

    if(flag == 1)
    {
        swap = number[count - 1];
        number[count - 1] = max;
        number[numberMax] = swap;
    }
}


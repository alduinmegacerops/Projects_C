#include <stdio.h>

#define MAXELEMENTS 10

void swapMinMax(int*, int);

int main()
{
    int inputNumbers[MAXELEMENTS];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        scanf("%d", &inputNumbers[i]);
        
    
    swapMinMax(inputNumbers, MAXELEMENTS);
    
    for(int i = 0; i < MAXELEMENTS; i++)
        printf("%d ", inputNumbers[i]);
    
    return 0;
}

void swapMinMax(int* number, int count)
{
    int min = 2147483647, numberMin = 0;
    int max = -2147483647, numberMax = 0;
    int swap;
    
    for(int i = 0; i < count; i++)
        if(min > number[i])
        {
            min = number[i];
            numberMin = i;
        }
    
    for(int i = 0; i < count; i++)
        if(max < number[i])
        {
            max = number[i];
            numberMax = i;
        }

    swap = number[numberMin];
    number[numberMin] = number[numberMax];
    number[numberMax] = swap;
}

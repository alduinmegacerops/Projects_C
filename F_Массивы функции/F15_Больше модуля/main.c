#include <stdio.h>

#define MAXELEMENTS 10

int countMoreModMax(int*, int);

int main()
{
    int inputNumbers[MAXELEMENTS];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        scanf("%d", &inputNumbers[i]);
        
    printf("%d", countMoreModMax(inputNumbers, MAXELEMENTS));
    
    return 0;
}

int countMoreModMax(int* number, int count)
{
    int max = -2147483647, countMod = 0, countMax = 0;
    
    for(int i = 0; i < count; i++)
        if(max <= number[i])
        {
            max = number[i];
            countMax++;
        }

    for(int i = 0; i < count; i++)
        if(number[i] < 0 && -number[i] > max)
            countMod++;
    
    if(max < 0)
        countMod -= countMax;
        
    return countMod;
}

#include <stdio.h>

#define MAXELEMENTS 30

int numbersTwoMin(int*, int);

int main()
{
    int inputNumbers[MAXELEMENTS], numberMin[2];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        scanf("%d", &inputNumbers[i]);
        
    numberMin[0] = numbersTwoMin(inputNumbers, MAXELEMENTS);
    numberMin[1] = numbersTwoMin(inputNumbers, MAXELEMENTS);
    
    if(numberMin[0] < numberMin[1])
        printf("%d %d", numberMin[0], numberMin[1]);
    else
        printf("%d %d", numberMin[1], numberMin[0]);
    
    return 0;
}

int numbersTwoMin(int* number, int count)
{
    int min = number[0], numberMin = 0;
    
    for(int i = 1; i < count; i++)
        if(min >= number[i])
        {
            min = number[i];
            numberMin = i;
        }
    
    number[numberMin] = 2147483647;
    
    return numberMin;  
}

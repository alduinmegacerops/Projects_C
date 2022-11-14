#include <stdio.h>

#define AMOUNTELEMENTS 10

void sort(int*);

int main()
{
    int inputNumber[AMOUNTELEMENTS], flag = 0;
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
    {
        scanf("%d", &inputNumber[i]);
        
        if(inputNumber[i] > 500 && inputNumber[i] < 500)
            flag = 1;
    }

    if(flag == 0)
        sort(inputNumber);
    
    return 0;
}

void sort(int inNumber[AMOUNTELEMENTS])
{
    int countP = 0, countN = 0, positiveNumbers[AMOUNTELEMENTS], negativeNumbers[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        if(inNumber[i] > 0)
            positiveNumbers[countP++] = inNumber[i];
        else if(inNumber[i] < 0)
            negativeNumbers[countN++] = inNumber[i];
            
    for (int i = 0; i < countP; i++)
        printf("%d ", positiveNumbers[i]);
    
    for (int i = 0; i < countN; i++)
        printf("%d ", negativeNumbers[i]);
}

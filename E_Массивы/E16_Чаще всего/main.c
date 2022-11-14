#include <stdio.h>

#define AMOUNTELEMENTS 10

int selection(int*);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);

    printf("%d ", selection(inputNumber));
    
    return 0;
}

int selection(int inNumber[AMOUNTELEMENTS])
{
    int count[AMOUNTELEMENTS] = {0}, max = 0, numberMax = 0;
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        for(int j = i + 1; j < AMOUNTELEMENTS; j++)
            if(inNumber[i] == inNumber[j])
            {
                count[i]++;   
            }
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        if(count[i] > max)
        {
            max = count[i];
            numberMax = i;
        }
    
    return inNumber[numberMax];
}

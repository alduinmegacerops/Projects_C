#include <stdio.h>

#define AMOUNTELEMENTS 10

void selection(int*);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);

    selection(inputNumber);
    
    return 0;
}

void selection(int inNumber[AMOUNTELEMENTS])
{
    int count[AMOUNTELEMENTS] = {0};
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        for(int j = i + 1; j < AMOUNTELEMENTS; j++)
            if(inNumber[i] == inNumber[j])
            {
                count[i]++;  
                count[j]++;
            }
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        if(count[i] == 0)
        {
            printf("%d ", inNumber[i]);
        }
}

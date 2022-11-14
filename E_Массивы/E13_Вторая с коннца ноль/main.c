#include <stdio.h>

#define AMOUNTELEMENTS 10

int selection(int*, int*);

int main()
{
    int inputNumber[AMOUNTELEMENTS], outputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);

    for (int i = 0; i < selection(inputNumber, outputNumber); i++)
    {
        printf("%d ", outputNumber[i]);
    }
    
    return 0;
}

int selection(int inNumber[AMOUNTELEMENTS], int outNumber[AMOUNTELEMENTS])
{
    int count = 0;
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        if(inNumber[i] % 100 == inNumber[i] % 10)
            outNumber[count++] = inNumber[i];

    return count;
}

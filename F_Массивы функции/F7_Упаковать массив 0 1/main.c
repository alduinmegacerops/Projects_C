#include <stdio.h>

#define AMOUNTELEMENTS 100

void countZeroOne(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    countZeroOne(inputNumber, AMOUNTELEMENTS - 1);

    return 0;
}

void countZeroOne(int number[], int count)
{
    int outArray[count], countNumbers = 1, countOut = 0;
    
    if(number[0] == 1)
        outArray[countOut++] = 0;
        
    for(int i = 0; i < count; i++)
    {
        if(number[i] == number[i + 1])
            countNumbers++;
        else
        {
            outArray[countOut++] = countNumbers;
            countNumbers = 1;
        }
    }
    
    printf("[%d", outArray[0]);
    
    for(int i = 1; i < countOut; i++)
        printf(",%d", outArray[i]);
    
    printf("]");
}

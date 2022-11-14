#include <stdio.h>

#define AMOUNTELEMENTS 10

void numberDigit(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);

    if(inputNumber >= 1)
        numberDigit(inputNumber);
    
    return 0;
}

void numberDigit(int inNumber)
{
    int digit[64], count = 0;
    
    while (inNumber != 0)
        {
            digit[count++] = inNumber % 10;
            inNumber /= 10;
        }
        
    for(int i = count - 1; i >= 0; i--)
        printf("%d ", digit[i]);
}

#include <stdio.h>

#define AMOUNTELEMENTS 10

void numberDigitM(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);

    if(inputNumber >= 1)
        numberDigitM(inputNumber);
    
    return 0;
}

void numberDigitM(int inNumber)
{
    int digit[64], count = 0, temp = 0;
    
    while (inNumber != 0)
        {
            digit[count++] = inNumber % 10;
            inNumber /= 10;
        }

    for(int i = 0; i < count; i++)
        for (int j = count - 1; j > i; j--)
            if(digit[j] > digit[j - 1])
            {
                temp = digit[j - 1];
                digit[j - 1] = digit[j];
                digit[j] = temp;
            }
    
    for(int i = 0; i < count; i++)
        printf("%d", digit[i]);
}

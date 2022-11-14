#include <stdio.h>

#define AMOUNTELEMENTS 12

void cyclicRightShift_4(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    cyclicRightShift_4(inputNumber, AMOUNTELEMENTS);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void cyclicRightShift_4(int number[AMOUNTELEMENTS], int count)
{
    for(int j = 0; j < 4; j ++)
    {
        int temp = number[count - 1];
        
        for(int i = count - 1; i >= 0; i--)
            number[i] = number[i - 1];
        
        number[0] = temp;
    }
}

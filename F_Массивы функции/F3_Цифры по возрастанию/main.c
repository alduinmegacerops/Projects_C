#include <stdio.h>

#define AMOUNTELEMENTS 1000

void printCountDigit(int*, int);

int main()
{
    int countDigit = 0, digit[AMOUNTELEMENTS];
    char inputNumber[AMOUNTELEMENTS];
    
    while(inputNumber[countDigit - 1] != '\n' && inputNumber[countDigit - 1] != ' ')
        inputNumber[countDigit++] = getchar();
    
    for(int i = 0; i < countDigit - 1; i++)
        digit[i] = inputNumber[i] - '0';
    
    printCountDigit(digit, countDigit);
    
    return 0;
}

void printCountDigit(int numberDigit[], int count)
{
    int digitCount[2][10] = {0};
    
    for(int i = 0; i < 10; i++)
        digitCount[0][i] = i;
    
    for(int i = 0; i < count - 1; i++)
        digitCount[1][numberDigit[i]]++;
    
    for(int i = 0; i < 10; i++)
        if(digitCount[1][i] != 0)
            printf("%d %3d\n", digitCount[0][i], digitCount[1][i]);
}

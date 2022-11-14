#include <stdio.h>

int printSumDigitNumber(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        printf("%d", printSumDigitNumber(inputNumber)); 

    return 0;
}

int printSumDigitNumber(int number)
{   
    if(number / 10 > 0)
        return number % 10 + printSumDigitNumber(number / 10);
    else
        return number % 10;
}

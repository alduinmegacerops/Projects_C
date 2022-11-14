#include <stdio.h>

void printDigits(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        printDigits(inputNumber); 

    return 0;
}

void printDigits(int number)
{   
    if(number / 10 != 0)
    {
        printDigits(number / 10);
    }
    
    printf("%d ", number % 10);
}

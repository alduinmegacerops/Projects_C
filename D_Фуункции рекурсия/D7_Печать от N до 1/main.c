#include <stdio.h>

void printNumber(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        printNumber(inputNumber); 

    return 0;
}

void printNumber(int number)
{
    printf("%d ", number);
    
    if(number > 1)
        printNumber(--number);
}

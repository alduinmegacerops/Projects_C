#include <stdio.h>

int numberUnits(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        printf("%d", numberUnits(inputNumber)); 

    return 0;
}

int numberUnits(int number)
{   
    if(number / 2 > 0)
        return number % 2 + numberUnits(number / 2);
    else
        return number % 2;
}

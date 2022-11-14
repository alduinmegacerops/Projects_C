#include <stdio.h>

void printSimple(int*);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if (inputNumber > 0)
        printSimple(&inputNumber);
    
    return 0;
}

void printSimple(int *number)
{
    int multiplier = 2;
    
    while (*number != 1)
    {
        while(*number % multiplier == 0)
        {
            printf("%d ", multiplier);
            *number /= multiplier;
        }
        
        multiplier++;
    }
}
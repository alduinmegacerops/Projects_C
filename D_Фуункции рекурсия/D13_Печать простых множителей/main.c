#include <stdio.h>

void printSimpleMultiplier(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        printSimpleMultiplier(inputNumber); 

    return 0;
}

void printSimpleMultiplier(int number)
{   
    static int multiplier = 2;
    
    if(number != 1)
    {
        if(number % multiplier == 0)
        {
            printf("%d ", multiplier);
            number /= multiplier;
        }
        else
            multiplier++;
            
        printSimpleMultiplier(number);
    }
}

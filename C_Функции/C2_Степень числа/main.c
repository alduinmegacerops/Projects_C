#include <stdio.h>

int power(int*, int*);

int main()
{
    int inputNumber, inputExponent;
    
    scanf("%d%d", &inputNumber, &inputExponent);
    
    if(inputNumber >= -1000 && inputNumber <= 1000 && inputExponent >= 0)
        printf("%d", power(&inputNumber, &inputExponent));

    return 0;
}

int power(int *number,int *exponent)
{
    int base = *number;
    
    if(*exponent == 0)
        *number = 1;
    else
    {
        for(int i = 1; i < *exponent; i++)
        {
            *number *= base;
        }
    }
    return *number;
}

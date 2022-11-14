#include <stdio.h>

int recursPower(int, int);

int main()
{
    int inputNumber, inputExponent;
    
    scanf("%d%d", &inputNumber, &inputExponent);
    
    if(inputNumber >= -100 && inputNumber <= 100 && inputExponent >= 0 && inputExponent <= 100)
        printf("%d", recursPower(inputNumber, inputExponent)); 

    return 0;
}

int recursPower(int number,int exponent)
{
    if(exponent == 0)
        return 1;
        
    if(exponent > 1)
        return number * recursPower(number, exponent - 1);
    else
        return number;
}

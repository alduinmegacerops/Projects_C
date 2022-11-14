#include <stdio.h>
#include <stdint.h>

uint64_t factorial(uint8_t);

int main()
{
    uint8_t inputNumber;
    
    scanf("%hhu", &inputNumber);
    
    if (inputNumber >= 0 && inputNumber <= 20)
        printf("%llu", factorial(inputNumber));
    
    return 0;
}

uint64_t factorial(uint8_t number)
{
    if (number <= 1)
        return 1;
    else
        return number * factorial(--number); 
}

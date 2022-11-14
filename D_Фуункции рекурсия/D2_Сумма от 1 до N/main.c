#include <stdio.h>
#include <stdint.h>

uint32_t sum(uint16_t);

int main()
{
    uint16_t inputNumber;
    
    scanf("%hu", &inputNumber);
    
    if(inputNumber >= 1)
        printf("%u", sum(inputNumber));
    
    return 0;
}

uint32_t sum(uint16_t number)
{
    if (number == 1)
        return 1;
    else
        return number + sum(--number); 
}


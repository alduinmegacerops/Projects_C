#include <stdio.h>
#include <stdint.h>

uint64_t arithmeticProgression(int*);

int main()
{
    int fieldNumber;
    
    scanf("%d", &fieldNumber);
    
    if (fieldNumber >= 1 && fieldNumber <= 64)
        printf("%llu", arithmeticProgression(&fieldNumber));
    
    return 0;
}

uint64_t arithmeticProgression(int *number)
{
    uint64_t previous = 1, current = 1;
    
    if (*number != 1)
    {
        for(int i = 1; i < *number; i++)
        {
            current = 2 * previous;
            previous = current;
        }
        
        return current;
    }
    else
        return  current;
}

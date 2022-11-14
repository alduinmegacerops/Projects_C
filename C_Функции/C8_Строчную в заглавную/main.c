#include <stdio.h>

char capsLock(char*);

int main()
{
    char inputSymbol;
    
    do {
        scanf("%c", &inputSymbol);
        
        if (inputSymbol != '.')
            printf("%c", capsLock(&inputSymbol));
        
    } while(inputSymbol != '.');

    return 0;
}

char capsLock(char *symbol)
{
    if(*symbol >= 'a' && *symbol <= 'z')
        *symbol -= 0x20;
        
    return *symbol;
}

#include <stdio.h>

void reverseString();

int main()
{
    reverseString();

    return 0;
}

void reverseString()
{
    char inputSymbol;
    
    scanf("%c", &inputSymbol);
    
    if (inputSymbol != '.')
    {
        reverseString();
        printf("%c", inputSymbol); 
    }
}


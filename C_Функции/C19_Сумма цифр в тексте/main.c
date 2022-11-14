#include <stdio.h>

int counter(char*);

int main()
{
    char inputSymbol;
    int sum = 0;
    
    do {
        scanf("%c", &inputSymbol);
        
        sum = counter(&inputSymbol);
        
    } while(inputSymbol != '.');
    
    printf("%d", sum);

    return 0;
}

int counter(char *symbol)
{
    static int sum = 0;
    
    if(*symbol >= '0' && *symbol <= '9')
        sum += *symbol - '0';
        
    return sum;
}

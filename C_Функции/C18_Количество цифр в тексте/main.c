#include <stdio.h>

int counter(char*);

int main()
{
    char inputSymbol;
    int count_sum = 0;
    
    do {
        scanf("%c", &inputSymbol);
        
        count_sum = counter(&inputSymbol);
        
    } while(inputSymbol != '.');
    
    printf("%d", count_sum);

    return 0;
}

int counter(char *symbol)
{
    static int count = 0;
    
    if(*symbol >= '0' && *symbol <= '9')
        count++;
        
    return count;
}

#include <stdio.h>

#define MAXELEMENTS 1000

void printCountSymbol(char*, int);

int main()
{
    char inputSymbol[MAXELEMENTS];
    int amountElements = 0;
    
    do {
        scanf("%c", &inputSymbol[amountElements]);
    } while(inputSymbol[amountElements++] != '.');
        
    printCountSymbol(inputSymbol, amountElements - 1);
    
    return 0;
}

void printCountSymbol(char* symbol, int count)
{
    int outArrayCountSymbol[count], countSymbol = 1, outCount = 0;
    char outArraySymbol[count];
    
    for(int i = 0; i < count; i++)
        if(symbol[i] == symbol[i + 1])
            countSymbol++;
        else
        {
            outArraySymbol[outCount] = symbol[i];
            outArrayCountSymbol[outCount++] = countSymbol;
            countSymbol = 1;
        }
    
    for(int i = 0; i < outCount; i++)
        printf("%c%d", outArraySymbol[i], outArrayCountSymbol[i]);
}

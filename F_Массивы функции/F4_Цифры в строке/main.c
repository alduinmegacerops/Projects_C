#include <stdio.h>

void printCountDigit();

int main()
{
    printCountDigit();
    
    return 0;
}

void printCountDigit()
{
    int digitCount[2][10] = {0};
    char inputSymbol;
    
    for(int i = 0; i < 10; i++)
        digitCount[0][i] = i;

    while(inputSymbol != '.')
    {
        scanf("%c", &inputSymbol);
        if(inputSymbol >= '0' && inputSymbol <= '9')
            digitCount[1][inputSymbol - '0']++;
    }
    
    for(int i = 0; i < 10; i++)
        if(digitCount[1][i] != 0)
            printf("%d %3d\n", digitCount[0][i], digitCount[1][i]);
}


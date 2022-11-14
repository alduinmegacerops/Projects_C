#include <stdio.h>

int aCounter();

int main()
{
    printf("%d", aCounter());

    return 0;
}

int aCounter()
{   
    char inputSymbol;
    static int count = 0;
   
    scanf("%c", &inputSymbol);
    
    if(inputSymbol != '.')
    {
        aCounter();
        if(inputSymbol == 'a')
            count++;
        return count;  
    }
    else
        count = 0;
}


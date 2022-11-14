#include <stdio.h>

int maxFind(int);

int main()
{
    printf("%d", maxFind(-2147483647)); 

    return 0;
}

int maxFind(int max)
{   
    int inputNumber;
   
    scanf("%d", &inputNumber);
    
    if(inputNumber != 0)
    {
        if(inputNumber > max)
            maxFind(inputNumber);
        else
            maxFind(max);
    }
    else
        return max;
}

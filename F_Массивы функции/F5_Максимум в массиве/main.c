#include <stdio.h>

#define AMOUNTELEMENTS 100

int maxFind(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    printf("%d", maxFind(inputNumber, AMOUNTELEMENTS));

    return 0;
}

int maxFind(int number[], int count)
{
    int max = number[0];
    
    for(int i = 1; i < count; i++)
        if(max < number[i])
            max = number[i];
    
    return max;  
}

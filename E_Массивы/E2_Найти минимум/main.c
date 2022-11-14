#include <stdio.h>

int min(int*, int);

int main()
{
    int inputNumber[5], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    printf("%d", min(inputNumber, amountElements));

    return 0;
}

int min(int number[], int count)
{
    int min = number[0];
    
    for(int i = 1; i < count; i++)
        if(min > number[i])
            min = number[i];
    
    return min;  
}

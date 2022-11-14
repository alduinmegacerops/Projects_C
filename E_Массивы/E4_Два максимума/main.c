#include <stdio.h>

int max(int*, int);

int main()
{
    int inputNumber[10], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    printf("%d", max(inputNumber, amountElements) + max(inputNumber, amountElements));

    return 0;
}

int max(int number[], int count)
{
    int max = -2147483647, numberMax;
    
    for(int i = 0; i < count; i++)
        if(max <= number[i])
        {
            max = number[i];
            numberMax = i;
        }
    
    number[numberMax] = -2147483647;
    
    return max;  
}

#include <stdio.h>

void min(int*, int);
void max(int*, int);

int main()
{
    int inputNumber[10], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    max(inputNumber, amountElements);
    min(inputNumber, amountElements);

    return 0;
}

void max(int number[], int count)
{
    int max = -2147483647, numberMax;
    
    for(int i = 0; i < count; i++)
        if(max < number[i])
        {
            max = number[i];
            numberMax = i + 1;
        }
    
    printf("%d %d ", numberMax, max);  
}

void min(int number[], int count)
{
    int min = 2147483647, numberMin;
    
    for(int i = 0; i < count; i++)
        if(min > number[i])
        {
            min = number[i];
            numberMin = i + 1;  
        }
    
    printf("%d %d", numberMin, min);   
}

#include <stdio.h>

int sumPositiveNumber(int*, int);

int main()
{
    int inputNumber[10], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    printf("%d", sumPositiveNumber(inputNumber, amountElements));

    return 0;
}

int sumPositiveNumber(int number[10], int count)
{
    int sum = 0;
    
    for(int i = 0; i < count; i++)
        if(number[i] > 0)
            sum += number[i];
    
    return sum;  
}

#include <stdio.h>

float average(int*, int);

int main()
{
    int inputNumber[12], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    printf("%.2f", average(inputNumber, amountElements));

    return 0;
}

float average(int number[12], int count)
{
    float sum = 0;
    
    for(int i = 0; i < count; i++)
        sum += number[i];
    
    return sum /= count;  
}


#include <stdio.h>
#include <stdlib.h>

#define MAXELEMENTS 1000

int missingNumber(int*, int);
void qSort(int*, int, int);

int main()
{
    int inputNumber[MAXELEMENTS], amountElements = 0;
    
    do {
        scanf("%d", &inputNumber[amountElements]);
    } while(inputNumber[amountElements++] != 0);
    
    printf("%d", missingNumber(inputNumber, amountElements - 1));

    return 0;
}

int missingNumber(int number[], int count)
{
    int min = 2147483647, max = -2147483647, flag = 0;
    
    for(int i = 0; i < count; i++)
        if(number[i] > max)
            max = number[i];
    
    for(int i = 0; i < count; i++)
        if(number[i] < min)
            min = number[i];
    
    for(int i = min; i <= max; i++)
    {
        flag = 0;
        
        for(int j = 0; j < count; j++)   
            if(number[j] == i)
                flag = 1;
        
        if(flag == 0)
            return i;
    }
}

#include <stdio.h>
#define N 10

void reverseHalf(int*, int);

int main()
{
    int inputNumber[N], amountElements = 0;
    char temp;
    
    do 
    {
        scanf("%d", &inputNumber[amountElements++]);
    } while((temp = getchar()) != '\n');
    
    reverseHalf(inputNumber, amountElements);

    for (int i = 0; i < amountElements; i++)
    {
        printf("%d ", inputNumber[i]);
    }

    return 0;
}

void reverseHalf(int number[N], int count)
{
    int tempFunction;
    
    for(int i = 0; i < count / 4; i++)
    {
        tempFunction = number[i];
        number[i] = number[count / 2 - 1 - i];
        number[count / 2 - 1 - i] = tempFunction;
    }

    for(int i = 0; i <  count / 4; i++)
    {
        tempFunction = number[i + count / 2];
        number[i + count / 2] = number[count - 1 - i];
        number[count - 1 - i] = tempFunction;
    }
}

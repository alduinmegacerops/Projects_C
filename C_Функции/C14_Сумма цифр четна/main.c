#include <stdio.h>

int parityOfSumOfDigits(int*);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(parityOfSumOfDigits(&inputNumber) == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

int parityOfSumOfDigits(int *number)
{
    int sum = 0;
    
    while (*number != 0)
    {
        sum += *number % 10;
        *number /= 10;
    }
    
    if(sum % 2 == 0)
        return 1;
    else
        return 0;
}


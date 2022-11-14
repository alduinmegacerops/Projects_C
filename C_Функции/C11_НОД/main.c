#include <stdio.h>

int nod(int*, int*);

int main()
{
    int inputNumber[2];
    
    scanf("%d%d", &inputNumber[0], &inputNumber[1]);
    
    if (inputNumber[0] > 0 && inputNumber[1] > 0)
    {
        printf("%d", nod(&inputNumber[0], &inputNumber[1]));
    }
    
    return 0;
}

int nod(int *number1, int *number2)
{
    while(*number1 != *number2)
    {
        if (*number1 > *number2)
        {
            *number1 -= *number2;
        }
        else
            *number2 -= *number1;
    }
    
    return *number1;
}

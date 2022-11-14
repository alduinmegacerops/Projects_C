#include <stdio.h>

int middle(int*, int*);

int main()
{
    int inputNumber1, inputNumber2;
    
    scanf("%d%d", &inputNumber1, &inputNumber2);
    
    if(inputNumber1 >= 0 && inputNumber2 >= 0)
        printf("%d", middle(&inputNumber1, &inputNumber2));

    return 0;
}

int middle(int *number1,int *number2)
{
    return (*number1 + *number2) / 2;
}

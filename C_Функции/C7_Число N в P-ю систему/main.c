#include <stdio.h>

void conversion(int*, int*);

int main()
{
    int inputNumber_10, numberSystem;
    
    scanf("%d%d", &inputNumber_10, &numberSystem);
    
    if (inputNumber_10 >= 0 && numberSystem >= 2 && numberSystem <= 9)
        conversion(&inputNumber_10, &numberSystem);

    return 0;
}

void conversion(int *number, int *numberSys)
{
    int outputNumber_N[64], i = 0;
    
    while (*number >= *numberSys)
    {
        outputNumber_N[i++] = *number % *numberSys;
        *number /= *numberSys;
    }
    
    outputNumber_N[i] = *number;
    
    for (; i >= 0; i--)
        printf("%d", outputNumber_N[i]);
}

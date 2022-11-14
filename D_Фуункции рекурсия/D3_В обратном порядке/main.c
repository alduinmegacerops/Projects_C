#include <stdio.h>
#include <stdint.h>

void print(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 0)
        print(inputNumber);
    
    return 0;
}

void print(int number)
{   
    printf("%d ", number % 10);
    
    number /= 10;
    
    if (number != 0)
        print(number);
}


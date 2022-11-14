#include <stdio.h>

void print(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    print(inputNumber);
    
    return 0;
}

void print(int number)
{
    if (number >= 10)
        print(number / 10);
        
    printf("%d ", number % 10);        
}

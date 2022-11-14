#include <stdio.h>
#include <stdint.h>

void conversion(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 0)
        conversion(inputNumber);
    
    return 0;
}

void conversion(int number)
{ 
    if(number >= 2)
        conversion(number / 2);
        
    printf("%d", number % 2);
}



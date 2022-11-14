#include <stdio.h>

int main()
{
    int inputNumber, max = -2147483648;
    char c;
    
    do {
        scanf("%d", &inputNumber);
        max = (inputNumber > max) ? inputNumber:max;
    } while((c = getchar()) != '\n');
    
    printf("%d", max);

    return 0;
}


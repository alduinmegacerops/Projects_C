#include <stdio.h>

int main()
{
    int i = 0, sum = 0, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    if(input_number >= 0)
    {
        while (input_number != 0)
        {
            input_number_digit[i++] = input_number % 10;
            input_number /= 10;
        }
    }
    
    for(int j = 0; j < i; j++)
    {
        sum +=input_number_digit[j];
    }
    
    printf("%d", sum);

    return 0;
}

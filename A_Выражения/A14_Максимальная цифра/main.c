#include <stdio.h>

int main()
{
    int input_number, i = 0, input_number_digit[3], temp;
    
    scanf("%d", &input_number);
    
    while (input_number != 0)
    {
        input_number_digit[i++] = input_number % 10;
        input_number /= 10;
    }
    
    for(int i = 0; i < 2; i++)
    {
        for (int j = 2; j > i; j--)
        {
            if(input_number_digit[j] > input_number_digit[j-1])
            {
                temp = input_number_digit[j-1];
                input_number_digit[j-1] = input_number_digit[j];
                input_number_digit[j] = temp;
            }
        }
    }
    
    printf("%d", input_number_digit[0]);

    return 0;
}

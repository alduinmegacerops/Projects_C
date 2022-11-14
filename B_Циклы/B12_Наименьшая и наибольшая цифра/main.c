#include <stdio.h>

int main()
{
    int n = 0, temp, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    if(input_number >= 0)
    {
        if (input_number == 0)
        {
            input_number_digit[0] = 0;
            n = 1;
        }
        
        while (input_number != 0)
        {
            input_number_digit[n++] = input_number % 10;
            input_number /= 10;
        }
        
        for(int i = 0; i < n-1; i++)
        {
            for (int j = n-1; j > i; j--)
            {
                if(input_number_digit[j] > input_number_digit[j-1])
                {
                    temp = input_number_digit[j-1];
                    input_number_digit[j-1] = input_number_digit[j];
                    input_number_digit[j] = temp;
                }
            }
        }
        
        printf("%d %d", input_number_digit[n-1], input_number_digit[0]);
    }
    
    return 0;
}
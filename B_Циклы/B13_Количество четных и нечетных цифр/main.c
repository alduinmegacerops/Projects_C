#include <stdio.h>

int main()
{
    int n = 0, honest = 0, odd = 0, input_number, input_number_digit[10];
    
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
            
        for (int i = 0; i < n; i++)
        {
            if (input_number_digit[i] % 2 == 0)
            {
                honest += 1;
            }
            else
            {
                odd += 1;
            }
        }
        
        printf("%d %d", honest, odd);
    }
    
    return 0;
}

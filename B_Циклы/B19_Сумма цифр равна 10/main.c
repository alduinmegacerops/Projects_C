#include <stdio.h>

int main()
{
    int counter = 0, sum = 0, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    if(input_number >= 1)
    {
        while (input_number != 0)
        {
            input_number_digit[counter++] = input_number % 10;
            input_number /= 10;
        }
        
        for(--counter; counter >= 0; counter--)
        {
            sum += input_number_digit[counter];
        }
        
        switch (sum) {
            case 10:
                printf("YES");
            break;
            
            default:
                printf("NO");
            break;
        }
    }
    
    return 0;
}


#include <stdio.h>

int main()
{
    int counter = 0, sum = 0, multiplication = 1, temp, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    
    if (input_number >= 10)
    {
        for(int enumeration = 10; enumeration <= input_number; enumeration++)
        {
            temp = enumeration;
            while (temp != 0)
            {
                input_number_digit[counter++] = temp % 10;
                temp /= 10;
            }
            
            for(int j = 0; j < counter; j++)
            {
                sum += input_number_digit[j];
                multiplication *= input_number_digit[j];
            }
            
            if(sum == multiplication)
                printf("%d ", enumeration);
                
            sum = 0;
            multiplication = 1;
            counter = 0;
        }
    }

    return 0;
}


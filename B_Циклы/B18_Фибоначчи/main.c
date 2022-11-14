#include <stdio.h>

int main()
{
    long long int input_number, fibonacci = 1, fibonacci_previous_1 = 1, fibonacci_previous_2 = 0;
    
    scanf("%Ld", &input_number);
    
    
    if (input_number >= 1)
    {
        for(int i = 1; i <= input_number; i++)
        {
            switch(i) {
                case 1:
                    fibonacci = 1;
                break;
                case 2:
                    fibonacci_previous_1 = fibonacci;
                    fibonacci = fibonacci_previous_1 + fibonacci_previous_2;
                break;
                default:
                    fibonacci_previous_2 = fibonacci_previous_1;
                    fibonacci_previous_1 = fibonacci;
                    fibonacci = fibonacci_previous_1 + fibonacci_previous_2;
                break;
            }
            
            printf("%Ld ", fibonacci);
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int input_number, i = 0, input_number_digit[3];
    
    scanf("%d", &input_number);
    
    if(input_number >= 100 && input_number <= 999)
    {
		while (input_number != 0)
		{
			input_number_digit[i++] = input_number % 10;
			input_number /= 10;
		}
    
		printf("%d", input_number_digit[0] + input_number_digit[1] + input_number_digit[2]);
	}

    return 0;
}

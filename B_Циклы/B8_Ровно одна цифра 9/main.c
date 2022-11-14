#include <stdio.h>

int main()
{
    int n = 0, flag = 0, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    while (input_number != 0)
    {
		input_number_digit[n++] = input_number % 10;
		input_number /= 10;
	}
        
    for (int i = 0; i < n; i++)
    {
        if (input_number_digit[i] == 9)
        {
            flag += 1;
        }
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

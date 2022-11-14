#include <stdio.h>

int main()
{
    int i = 0, flag = 0, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    while (input_number != 0)
        {
            input_number_digit[i++] = input_number % 10;
            input_number /= 10;
        }
        
    for (int j = 0; j < i-1; j++)
    {
        if (input_number_digit[j] == input_number_digit[j+1])
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}


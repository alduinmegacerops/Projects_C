#include <stdio.h>

int main()
{
    int n = 0, flag = 0, input_number, input_number_digit[10];
    
    scanf("%d", &input_number);
    
    if(input_number < 0)
        input_number *= -1;
        
    if(input_number == 0)
        flag = 1;
    
    while (input_number != 0)
    {
        input_number_digit[n++] = input_number % 10;
        input_number /= 10;
    }
    
    if(n != 1)
    {
        for(int i = 0; i < n-1; i++)
        {
            for (int j = n-1; j > i; j--)
            {
                if(input_number_digit[j] < input_number_digit[j-1])
                    flag = 1;
                else
                {
                    flag = 0;
                    break;
                }
            }
            
            if (flag == 0)
                break;
        }
    }
    else
        flag = 1;
    
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

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
        
    for (int i = 0; i < n-1; i++)
    {
        for(int j = n; j > i; j--)
        {
            if (input_number_digit[i] == input_number_digit[j])
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        
        if(flag == 1)
            break;
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

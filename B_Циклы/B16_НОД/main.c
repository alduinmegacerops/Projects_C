#include <stdio.h>

int main()
{
    int input_number[2];
    
    scanf("%d%d", &input_number[0], &input_number[1]);
    
    if (input_number[0] > 0 && input_number[1] > 0)
    {
        while(input_number[0] != input_number[1])
        {
            if (input_number[0] > input_number[1])
            {
                input_number[0] -= input_number[1];
            }
            else
                input_number[1] -= input_number[0];
        }
        
        printf("%d", input_number[0]);
    }

    return 0;
}

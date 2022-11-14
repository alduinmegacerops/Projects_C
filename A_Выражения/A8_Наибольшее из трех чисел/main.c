#include <stdio.h>

int main()
{
    int input_number[3], temp;
    
    scanf("%d%d%d", &input_number[0], &input_number[1], &input_number[2]);
    
    for(int i = 0; i < 2; i++)
    {
        for (int j = 2; j > i; j--)
        {
            if(input_number[j] > input_number[j-1])
            {
                temp = input_number[j-1];
                input_number[j-1] = input_number[j];
                input_number[j] = temp;
            }
        }
    }
    
    printf("%d", input_number[0]);

    return 0;
}

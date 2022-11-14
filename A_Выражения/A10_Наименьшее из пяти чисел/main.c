#include <stdio.h>

int main()
{
    int input_number[5], temp;
    
    scanf("%d%d%d%d%d", &input_number[0], &input_number[1], &input_number[2], &input_number[3], &input_number[4]);
    
    for(int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            if(input_number[j] < input_number[j-1])
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

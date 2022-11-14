#include <stdio.h>
#include <math.h>

int main()
{
    int input_number[2];
    
    scanf("%d%d", &input_number[0], &input_number[1]);
    
    if (input_number[0] <= input_number[1] && input_number[0] < 100 && input_number[1] < 100)
    {
        for(int i = input_number[0]; i <= input_number[1]; i++)
        {
            printf("%.0f ", pow(i,2));
        }
    }

    return 0;
}

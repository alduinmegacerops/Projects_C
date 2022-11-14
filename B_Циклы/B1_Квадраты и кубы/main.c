#include <stdio.h>
#include <math.h>

int main()
{
    int input_number;
    
    scanf("%d", &input_number);
    
    for(int i = 1; i <= input_number; i++)
    {
        printf("%d %.0f %.0f\n", i, pow(i,2), pow(i,3));
    }

    return 0;
}

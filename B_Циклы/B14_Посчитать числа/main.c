#include <stdio.h>

int main()
{
    int sum = 0, input_number;
    
    while(input_number != 0) 
    {
        scanf("%d", &input_number);
        sum++;
    }

    printf("%d" , --sum);

    return 0;
}

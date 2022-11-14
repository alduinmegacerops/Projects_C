#include <stdio.h>

int main()
{
    int sum = 0, input_number;
    
    while(input_number != 0) 
    {
        scanf("%d", &input_number);
        if(input_number % 2 == 0)
            sum++;
    }

    printf("%d" , --sum);

    return 0;
}

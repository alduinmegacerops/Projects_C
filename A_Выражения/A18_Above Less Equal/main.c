#include <stdio.h>
#include <stdbool.h>

int main()
{
    int input_number[2], temp;
    
    scanf("%d%d", &input_number[0], &input_number[1]);
    
    temp = input_number[0] >= input_number[1];
    
    switch (temp) {
        case 1:
            if (input_number[0] != input_number[1])
                printf("Above");
            else
                printf("Equal");
        break;
        
        case 0:
            printf("Less");
        break;
        
        default:
        break;
    }
    
    return 0;
}

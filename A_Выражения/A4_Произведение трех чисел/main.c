#include <stdio.h>

int main()
{
    int input_number_1, input_number_2, input_number_3;
    
    scanf("%d%d%d", &input_number_1, &input_number_2, &input_number_3);
    
    printf("%d+%d+%d=%d\n", input_number_1, input_number_2, input_number_3, input_number_1+input_number_2+input_number_3);
    printf("%d*%d*%d=%d\n", input_number_1, input_number_2, input_number_3, input_number_1*input_number_2*input_number_3);

    return 0;
}

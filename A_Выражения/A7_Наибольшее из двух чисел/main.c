#include <stdio.h>

int main()
{
    int input_number_1, input_number_2;
    
    scanf("%d%d", &input_number_1, &input_number_2);
    
    if (input_number_1 > input_number_2)
        printf("%d %d\n", input_number_2, input_number_1);
    else
        printf("%d %d\n", input_number_1, input_number_2);

    return 0;
}

#include <stdio.h>

int main()
{
    float input_number_1, input_number_2, input_number_3;
    
    scanf("%f%f%f", &input_number_1, &input_number_2, &input_number_3);
    
    printf("%.2f\n", (input_number_1+input_number_2+input_number_3)/3);


    return 0;
}

#include <stdio.h>

int mod_number(int*);

int main()
{
    int input_number;
    
    scanf("%d", &input_number);
    
    printf("%d", mod_number(&input_number));

    return 0;
}

int mod_number(int *number_input)
{
    return (*number_input < 0) ? -*number_input:*number_input;
}

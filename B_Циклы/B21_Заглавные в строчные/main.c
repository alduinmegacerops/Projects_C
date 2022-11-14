#include <stdio.h>

int main()
{
    char input_string[100];
    int i = 0;
    
    do {
        scanf("%c", &input_string[i]);
    } while(input_string[i++] != '.');
    
    for(int j = 0; j < i; j++ )
    {
        if(input_string[j] >= 'A' && input_string[j] <= 'Z')
            input_string[j] += 0x20;  
    }

    for(int j = 0; j < i-1; j++ )
    {
        printf("%c" , input_string[j]);
    }

    return 0;
}

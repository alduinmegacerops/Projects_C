#include <stdio.h>

int main()
{
    int input_number, flag = 0;
    
    scanf("%d", &input_number);
    
    if(input_number > 1)
    {
        if (input_number == 2)
            flag = 1;
            
        for(int i = 2; i < input_number; i++)
        {
            if(input_number % i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        
        if(flag == 1)
            printf("YES");
        else
            printf("NO");
    }
    else
        printf("NO");
    
    return 0;
}



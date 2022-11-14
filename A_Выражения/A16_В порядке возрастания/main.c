#include <stdio.h>

int main()
{
    int input_numbers[3], flag;
    
    scanf("%d%d%d", &input_numbers[0], &input_numbers[1], &input_numbers[2]);
    
    for(int i = 0; i < 2; i++)
    {
        for (int j = 2; j > i; j--)
        {
            if(input_numbers[j] > input_numbers[j-1])
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

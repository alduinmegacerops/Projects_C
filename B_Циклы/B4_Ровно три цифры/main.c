#include <stdio.h>
#include <math.h>

int main()
{
    int input_number, i = 0;
    
    scanf("%d", &input_number);
    
    if (input_number > 0)
    {
        while(input_number != 0)
        {
            input_number /= 10;
            i++;
        }
        
        switch(i) {
            case 3:
                printf("YES");
            break;
                
            default:
                printf("NO");
            break;
        }
    }

    return 0;
}

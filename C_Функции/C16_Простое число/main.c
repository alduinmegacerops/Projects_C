#include <stdio.h>

int isSimple(int*);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(isSimple(&inputNumber) == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

int isSimple(int *number)
{
    int flag = 0;
    
    if(*number > 1)
    {
        if (*number == 2)
            flag = 1;
            
        for(int i = 2; i < *number; i++)
        {
            if(*number % i == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        
        if(flag == 1)
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

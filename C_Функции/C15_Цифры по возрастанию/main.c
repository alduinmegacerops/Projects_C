#include <stdio.h>

int growUp(int*);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(growUp(&inputNumber) == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

int growUp(int *number)
{
    int numberDigit[10], n = 0, flag = 1;
    
    while (*number != 0)
    {
        numberDigit[n++] = *number % 10;
        *number /= 10;
    }
    
    if(n != 1)
    {
        for(int i = 0; i < n-1; i++)
        {
            for (int j = n-1; j > i; j--)
            {
                if(numberDigit[j] < numberDigit[j-1])
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
    }
    else
        flag = 1;
        
    if(flag == 1)
        return 1;
    else
        return 0;
}

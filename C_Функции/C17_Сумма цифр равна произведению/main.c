#include <stdio.h>

int isHappyNumber(int*);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(isHappyNumber(&inputNumber) == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}

int isHappyNumber(int *number)
{
    int counter = 0, sum = 0, multiplication = 1, numberDigit[10];
    
    if (*number >= 0)
    {
        while (*number != 0)
        {
            numberDigit[counter++] = *number % 10;
            *number /= 10;
        }
            
        for(int i = 0; i < counter; i++)
        {
            sum += numberDigit[i];
            multiplication *= numberDigit[i];
        }
            
        if(sum == multiplication)
            return 1;
        else
            return 0;
		}
}

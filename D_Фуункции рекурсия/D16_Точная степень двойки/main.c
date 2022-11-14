#include <stdio.h>

int is2pow(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
    {
        if(is2pow(inputNumber) == 1)
            printf("YES");
        else
            printf("NO");
	}

    return 0;
}
int is2pow(int number)
{   
    if(number > 1)
        if(number % 2 == 0)
            is2pow(number / 2);
        else
            return 0;
    else
        return 1;
}


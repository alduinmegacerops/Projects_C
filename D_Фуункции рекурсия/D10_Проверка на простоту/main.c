#include <stdio.h>
#include <math.h>

int isSimple(int, int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
    {
        if(isSimple(inputNumber, 2) == 1)
            printf("YES");
        else
            printf("NO");
	}

    return 0;
}

int isSimple(int number, int divider)
{
    if(number == 1)
        return 0;
        
    if(divider < sqrt(number))
        if(number % divider != 0)
        {
            divider++;
            isSimple(number, divider);
        }
        else
            return 0;
    else
        return 1;
}

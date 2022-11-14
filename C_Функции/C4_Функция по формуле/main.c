#include <stdio.h>

int function(int);

int main()
{
    int inputNumber, max = -2147483647;
    
	do
	{
		scanf("%d", &inputNumber);
		
		if (function(inputNumber) > max)
			max = function(inputNumber);
		
    } while(inputNumber != 0);

	printf("%d", max);
	
    return 0;
}

int function(int number)
{   
    if (number >= 2)
		return number * number + 4 * number + 5;
	else if (number < -2)
		return 4;
	else
		return number * number;
}

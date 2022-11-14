#include <stdio.h>

int akkerman(int, int);

int main()
{
    int inputNumber_M, inputNumber_N;
    
    scanf("%d%d", &inputNumber_M, &inputNumber_N);
    
    if(inputNumber_M >= 0 && inputNumber_N >= 0)
        printf("%d", akkerman(inputNumber_M, inputNumber_N));

    return 0;
}
int akkerman(int number_M, int number_N)
{  
    if(number_M == 0)
        return ++number_N;
    if(number_M > 0 && number_N == 0)
        return akkerman(number_M - 1, 1);
    if(number_M > 0 && number_N > 0)
        return akkerman(number_M - 1, akkerman(number_M, number_N - 1));
        
    return akkerman(number_M, number_N);
}

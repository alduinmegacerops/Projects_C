#include <stdio.h>

int arithmeticProgression(int*);

int main()
{
    int N;
    
    scanf("%d", &N);
    if (N >= 0)
        printf("%d", arithmeticProgression(&N));
    
    return 0;
}

int arithmeticProgression(int *n)
{
    int sum = 0;
    
    for(int i = 0; i <= *n; i++)
        sum += i;
        
    return sum;
}

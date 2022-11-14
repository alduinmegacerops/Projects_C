#include <stdio.h>

#define MAXELEMENTS 10

int countNumbersSection(int*, int, int, int);

int main()
{
    int inputNumbers[MAXELEMENTS], begin, end;
    
    scanf("%d%d", &begin, &end);
    
    if(begin > end)
    {
        int swap = 0;
        
        swap = begin;
        begin = end;
        end = swap;
    }
    
    for(int i = 0; i < MAXELEMENTS; i++)
        scanf("%d", &inputNumbers[i]);
        
    printf("%d", countNumbersSection(inputNumbers, MAXELEMENTS, begin, end));
    
    return 0;
}

int countNumbersSection(int* number, int count, int beginSection, int endSection)
{
    int sum = 0;
    
    for(int i = beginSection; i <= endSection; i++)
        for(int j = 0; j < count; j++)
            if(number[j] == i)
                sum += number[j];
    
    return sum;
}

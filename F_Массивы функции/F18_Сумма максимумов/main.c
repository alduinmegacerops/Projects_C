#include <stdio.h>

#define MAXELEMENTS 10

int sumMaxHorizontal(int, int, int(*)[]);

int main()
{
    int inputMatrix[MAXELEMENTS][MAXELEMENTS];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        for(int j = 0; j < MAXELEMENTS; j++)
            scanf("%d", &inputMatrix[i][j]);
    
    printf("%d", sumMaxHorizontal(MAXELEMENTS, MAXELEMENTS, inputMatrix));
    
    return 0;
}

int sumMaxHorizontal(int horizontal, int vertical, int (*matrix)[MAXELEMENTS])
{
    int sum = 0, max = -2147483647;
    
    for(int i = 0; i < vertical; i++)
    {
        for(int j = 0; j < horizontal; j++)
        {
            if(matrix[i][j] > max)
                max = matrix[i][j];
        }
        
        sum += max;
        max = -2147483647;
    }   
    
    return sum;
}

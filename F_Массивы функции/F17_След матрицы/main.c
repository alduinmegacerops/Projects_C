#include <stdio.h>

#define MAXELEMENTS 5

int matrixTrace(int, int, int(*)[]);

int main()
{
    int inputMatrix[MAXELEMENTS][MAXELEMENTS];
    
    for(int i = 0; i < MAXELEMENTS; i++)
        for(int j = 0; j < MAXELEMENTS; j++)
            scanf("%d", &inputMatrix[i][j]);
    
    printf("%d", matrixTrace(MAXELEMENTS, MAXELEMENTS, inputMatrix));
    
    return 0;
}

int matrixTrace(int horizontal, int vertical, int (*matrix)[MAXELEMENTS])
{
    int trace = 0;
    
    for(int i = 0; i < vertical; i++)
        for(int j = 0; j < horizontal; j++)
            if(i == j)
                trace += matrix[i][j];
    
    return trace;
}

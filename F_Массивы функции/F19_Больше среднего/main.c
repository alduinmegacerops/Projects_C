#include <stdio.h>

#define MAXELEMENTS 5

int matrixAverageMainTrace(int, int, int(*)[]);

int main()
{
    int inputMatrix[MAXELEMENTS][MAXELEMENTS];
    int averageMainTrace = 0, count = 0;
    
    for(int i = 0; i < MAXELEMENTS; i++)
        for(int j = 0; j < MAXELEMENTS; j++)
            scanf("%d", &inputMatrix[i][j]);
    
    averageMainTrace = matrixAverageMainTrace(MAXELEMENTS, MAXELEMENTS, inputMatrix);
    
    for(int i = 0; i < MAXELEMENTS; i++)
        for(int j = 0; j < MAXELEMENTS; j++)
            if(inputMatrix[i][j] > averageMainTrace)
                count++;
    
    printf("%d", count);
    
    return 0;
}

int matrixAverageMainTrace(int horizontal, int vertical, int (*matrix)[MAXELEMENTS])
{
    int trace = 0;
    
    for(int i = 0; i < vertical; i++)
        for(int j = 0; j < horizontal; j++)
            if(i == j)
                trace += matrix[i][j];
    
    return trace / MAXELEMENTS;
}

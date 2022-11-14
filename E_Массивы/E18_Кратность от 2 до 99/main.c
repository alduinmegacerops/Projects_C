#include <stdio.h>

#define AMOUNTELEMENTS 10

void numberMultiples(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);

    if(inputNumber >= 2 && inputNumber <= 10000)
        numberMultiples(inputNumber);
    
    return 0;
}

void numberMultiples(int inNumber)
{
    int out[2][8] = {0};
    
    for(int i = 0; i < 8; i++)
        out[0][i] = i + 2;
    
    for(int i = 2; i <= inNumber; i++)
    {
        for(int j = 0; j < 8; j++)
            if(i % out[0][j] == 0)
                out[1][j]++;
    }
    
    for(int i = 0; i < 8; i++)
        printf("%d %3d\n", out[0][i], out[1][i]);
}

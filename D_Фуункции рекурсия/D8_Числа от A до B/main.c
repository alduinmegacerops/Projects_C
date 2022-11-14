#include <stdio.h>

void printSection(int, int);

int main()
{
    int inputNumber[2];
    
    scanf("%d%d", &inputNumber[0], &inputNumber[1]);
    
    printSection(inputNumber[0], inputNumber[1]); 

    return 0;
}

void printSection(int numberLeft, int numberRight)
{
    if(numberLeft <= numberRight)
    {
        printf("%d ", numberLeft);
        if(numberLeft < numberRight)
            printSection(numberLeft + 1, numberRight);
    }
    else
    {
        printf("%d ", numberLeft);
        printSection(numberLeft - 1, numberRight);
    }
}

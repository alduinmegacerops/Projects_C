#include <stdio.h>

#define AMOUNTELEMENTS 100

int twoIdentical(int*, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    if(twoIdentical(inputNumber, AMOUNTELEMENTS) == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}

int twoIdentical(int number[], int count)
{
    for(int i = 0; i < count; i++)
        for(int j = i + 1; j < count; j++)
            if(number[i] == number[j])
                return 1;
                
    return 0;
}

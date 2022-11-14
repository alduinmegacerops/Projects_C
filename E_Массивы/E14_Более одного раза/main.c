#include <stdio.h>

#define AMOUNTELEMENTS 10

int selection(int*, int*);

int main()
{
    int inputNumber[AMOUNTELEMENTS], outputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);

    for (int i = 0; i < selection(inputNumber, outputNumber); i++)
    {
        printf("%d ", outputNumber[i]);
    }
    
    return 0;
}

int selection(int inNumber[AMOUNTELEMENTS], int outNumber[AMOUNTELEMENTS])
{
    int count = 0, flag = 1;
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        for(int j = i + 1; j < AMOUNTELEMENTS; j++)
            if(inNumber[i] == inNumber[j])
            {
                for(int k = 0; k < count; k++)
                    if(outNumber[k] == inNumber[i])
                    {
                        flag = 0;
                        break;
                    }
                    else
                        flag = 1;
                        
                if(flag == 1)
                    outNumber[count++] = inNumber[i];
                    
                flag = 0;
            }

    return count;
}

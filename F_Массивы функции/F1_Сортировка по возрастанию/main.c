#include <stdio.h>

#define AMOUNTELEMENTS 20

void qSort(int*, int, int);

int main()
{
    int inputNumber[AMOUNTELEMENTS];
    
    for(int i = 0; i < AMOUNTELEMENTS; i++)
        scanf("%d", &inputNumber[i]);
    
    qSort(inputNumber, 0, AMOUNTELEMENTS - 1);

    for (int i = 0; i < AMOUNTELEMENTS; i++)
    {
        printf("%d ", inputNumber[i]);
    }
    
    return 0;
}

void qSort(int number[AMOUNTELEMENTS], int left, int right)
{
    int temp, leftBegin = left, rightEnd = right;
    int pivot = number[(leftBegin + rightEnd - 1) / 2];
    
    while(leftBegin <= rightEnd)
    {
        while(number[leftBegin] < pivot)
            leftBegin++;
        while(number[rightEnd] > pivot)
            rightEnd--;
            
        if(leftBegin <= rightEnd)
        {
            temp = number[leftBegin];
            number[leftBegin] = number[rightEnd];
            number[rightEnd] = temp;
            
            leftBegin++;
            rightEnd--;
        }
    }
    
    if(left < rightEnd)
        qSort(number, left, rightEnd);
    if(leftBegin < right)
        qSort(number, leftBegin, right);
}

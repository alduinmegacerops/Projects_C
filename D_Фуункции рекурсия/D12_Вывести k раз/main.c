#include <stdio.h>

void sequence(int);

int main()
{
    int inputNumber;
    
    scanf("%d", &inputNumber);
    
    if(inputNumber >= 1)
        sequence(inputNumber); 

    return 0;
}

void sequence(int number)
{   
    static int count = 1, sequenceMember = 1;
    
    if(number > 0)
    {
        sequence(number - 1);
        printf("%d ", sequenceMember);
        if(count == sequenceMember * (sequenceMember + 1) / 2)
            sequenceMember++;
        count++;
    }
    else
    {
        count = 1;
        sequenceMember = 1;
    }   
}

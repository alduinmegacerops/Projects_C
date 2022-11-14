#include <stdio.h>

void oddSequenceMember();

int main()
{
    oddSequenceMember(); 

    return 0;
}

void oddSequenceMember()
{   
    int inputNumber;
   
    scanf("%d", &inputNumber);
    
    if(inputNumber != 0)
    {
        if(inputNumber % 2 != 0)
            printf("%d ", inputNumber);
            
        oddSequenceMember();
    }
}

#include <stdio.h>

int parentheses(char*);

int flag = 0;

int main()
{
    char inputSymbol;
    int count = 0;
    
    do {
        scanf("%c", &inputSymbol);
        
        if(count == 0 && inputSymbol == ')') 
        {   
            flag = 1;
            break;
        }
        
        if((inputSymbol == '(' || inputSymbol == ')' || inputSymbol == '.'))
            parentheses(&inputSymbol);
        else
        {
            flag = 1;
            break;
        }
        
        count++;
        
        if(count >= 1000) 
            break;
        
    } while(inputSymbol != '.');
    
    if(flag == 0)
        printf("YES");
    else
        printf("NO");   

    return 0;
}

int parentheses(char *symbol)
{
    switch (*symbol) {
        case '(':
            flag++;
        break;
        
        case ')':
            flag--;
        break;
        
        default:
        break;
    }
        
    return flag;
}

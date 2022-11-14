#include <stdio.h>

#define MAXELEMENTS 10

int chessBoard(char, int);

int main()
{
    char cellLetter;
    int cellNumber;
    
    scanf("%c%d", &cellLetter, &cellNumber);
    
    if(chessBoard(cellLetter, cellNumber - 1) == 1)
        printf("WHITE");
    else
        printf("BLACK");
    
    return 0;
}

int chessBoard(char letter, int number)
{
    int board[8][8] = { {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0}};
    
    switch(letter)
    {
        case 'A':
            return board[0][number];
            break;
        
        case 'B':
            return board[1][number];
            break;
        
        case 'C':
            return board[2][number];
            break;
        
        case 'D':
            return board[3][number];
            break;
        
        case 'E':
            return board[4][number];
            break;
        
        case 'F':
            return board[5][number];
            break;
        
        case 'G':
            return board[6][number];
            break;
        
        case 'H':
            return board[7][number];
            break;
            
        default:
            break;
    }
}

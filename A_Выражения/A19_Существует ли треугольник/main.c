#include <stdio.h>

int main()
{
    int input_side_triangle[3], temp;
    
    scanf("%d%d%d", &input_side_triangle[0], &input_side_triangle[1], &input_side_triangle[2]);
    
//(b+c > a) && (a+c > b) && (a+b > c)
    
    temp = (input_side_triangle[1] + input_side_triangle[2] > input_side_triangle[0]) && 
           (input_side_triangle[0] + input_side_triangle[2] > input_side_triangle[1]) && 
           (input_side_triangle[0] + input_side_triangle[1] > input_side_triangle[2]);

    switch (temp) {
        case 1:
            printf("YES");
        break;
        
        case 0:
            printf("NO");
        break;
        
        default:
        break;
    }
    
    return 0;
}

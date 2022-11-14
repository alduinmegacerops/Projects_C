#include <stdio.h>

int main()
{
    float input_X[2], input_Y[2], k = 0, b =0;
    
    scanf("%f%f%f%f", &input_X[0], &input_Y[0], &input_X[1], &input_Y[1]);

//y = kx + b
// b = Y[0] - k*X[0]
// b = Y[1] - k*X[1]
//Y[0] - k*X[0] = b = Y[1] - k*X[1]
//Y[0] - Y[1] = k*X[0] - k*X[1]
//k = (Y[0] - Y[1])/(X[0] - X[1])
    
    k = (input_Y[0] - input_Y[1])/(input_X[0] - input_X[1]);
    b = input_Y[0] - k * input_X[0];
    
    printf("%.2f %.2f", k, b);

    return 0;
}

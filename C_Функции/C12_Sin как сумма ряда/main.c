#include <stdio.h>
#include <math.h>
#include <stdint.h>

float sinus(float);
uint64_t factorial(int);

int main()
{
    float inputNumber;
    
    scanf("%f", &inputNumber);
    
    if (inputNumber >= 0 && inputNumber<= 90)
    {
        inputNumber *= 3.14/180;
        
        printf("%.3f", sinus(inputNumber));
    }
    
    return 0;
}

float sinus(float radian)
{
    float sum = 0;
    int counter = 0;
    
    while(pow(radian, 2 * counter + 1)/factorial(2 * counter + 1) > 0.001)
    {
        sum += pow(-1, counter) * pow(radian, 2 * counter + 1)/factorial(2 * counter + 1);
        counter++;
    } 
    
    return sum;
}

uint64_t factorial(int number)
{
    if (number <= 1)
        return 1;
    else
        return number * factorial(--number); 
}
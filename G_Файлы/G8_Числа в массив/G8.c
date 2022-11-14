#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#define SIZE 1001

void input(char *strIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strIn) == 1);
		
	fclose(in);
}

void num(uint64_t *digit, int *countDigNum, int **countNum, uint64_t *numberOut)
{
	for(int i = 0, j = *countDigNum - 1; i < *countDigNum; i++, j--)	
		numberOut[**countNum] += digit[i] * pow(10, j);

	for(int i = 0; i < 20; i++)
		digit[i] = 10;
				
	**countNum += 1;
	*countDigNum = 0;
}

void searchNumber(char *strSe, uint64_t *out, int *countNumber)
{
	uint64_t buffer[20];
	int countDigit = 0, flag = 0;
	
	for(int i = 1; i <= strlen(strSe); i++)
	{
		flag = 0;
		
		if(strSe[i - 1] >= '0' && strSe[i - 1] <= '9')
		{
			flag = 1;
			buffer[countDigit++] = strSe[i - 1] - '0';
		}
			
		if(flag == 0 && buffer[0] >= 0 && buffer[0] <= 9)
			num(buffer, &countDigit, &countNumber, out);
	}
	
	if(strSe[strlen(strSe) - 1] >= '0' && strSe[strlen(strSe) - 1] <= '9')
		num(buffer, &countDigit, &countNumber, out);
}
void output(uint64_t *outNum, int countDig)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < countDig; i++)
		fprintf(out, "%lld ", outNum[i]);
	
	fclose(out);
}

void qSort(uint64_t *number, int left, int right)
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

int main(int argc, char **argv)
{
	char str[SIZE];
	uint64_t number[SIZE] = {0};
	int count = 0;
	
	input(str);
	
	searchNumber(str, number, &count);
	
	qSort(number, 0, count - 1);
	
	output(number, count);
	
	return 0;
}

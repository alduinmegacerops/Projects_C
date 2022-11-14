#include <stdio.h>
#include <string.h>

#define SIZE 101

void input(int horizOut, int vertOut, char (*wordOut)[SIZE])
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	fscanf(in, "%s%s", wordOut[0], wordOut[1]);
		
	fclose(in);
}

void output(int horizIn, int vertIn, char (*wordIn)[SIZE])
{	
	char outSymbol[SIZE];
	int count = 0, flag = 1;
	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < strlen(wordIn[0]); i++)
	{
		for(int j = 0; j < strlen(wordIn[1]); j++)
		{
			if(wordIn[0][i] == wordIn[1][j])
				outSymbol[count++] = wordIn[0][i];
		}
	}
	
	for(int i = 0; i < count; i++)
	{
		flag = 1;
		
		for(int j = i + 1; j < count; j++)
		{
			if(outSymbol[i] == outSymbol[j])
			{
				flag = 0;
				outSymbol[j] = ' ';
			}
		}
		
		if(flag == 1 && outSymbol[i] != ' ')
			fprintf(out, "%c ", outSymbol[i]);
	}	
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char word[2][SIZE];
	
	input(2, SIZE, word);
	
	output(2, SIZE, word);
	
	return 0;
}

#include <stdio.h>
#include <string.h>

#define SIZE 10001

int input()
{	
	int count = 0;
	char str[SIZE];
	
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%s", str) == 1)
	{
		if(str[strlen(str) - 1] == 'a')
			count++;
	}
		
	fclose(in);
	
	return count;
}

void output(int countOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "%d", countOut);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	output(input());

	return 0;
}

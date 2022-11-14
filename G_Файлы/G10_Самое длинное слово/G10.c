#include <stdio.h>
#include <string.h>

#define SIZE 10001

void input(char *strIn)
{
	char buffer[SIZE];	
	int maxLetter = 0;
	
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	fscanf(in, "%s", buffer);
	maxLetter = strlen(buffer);
	strcpy(strIn, buffer);
	
	while(fscanf(in, "%s", buffer) == 1)
	{
		if(maxLetter < strlen(buffer))
		{
			maxLetter = strlen(buffer);
			strcpy(strIn, buffer);
		}
	}
		
	fclose(in);
}

void output(char *strOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "%s", strOut);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[SIZE];
	
	input(str);
	
	output(str);

	return 0;
}

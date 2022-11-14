#include <stdio.h>
#include <string.h>

#define MAXELEMENTS 100

void input(char* stringIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	fscanf(in, "%[^\n]", stringIn);
	
	printf("%s", stringIn);
		
	fclose(in);
}

void output(char* stringOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < 3; i++)
		i == 2 ? fprintf(out, "%s ", stringOut) : fprintf(out, "%s, ", stringOut);
	
	fprintf(out, "%lld", strlen(stringOut));
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char inputStringFile[MAXELEMENTS];
	
	input(inputStringFile);
	
	output(inputStringFile);
	
	return 0;
}

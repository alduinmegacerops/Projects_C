#include <stdio.h>
#include <string.h>

#define MAXELEMENTS 100

void input(char *string)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", string) == 1);
		
	fclose(in);
}

void output(char *str)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < strlen(str) - 1; i++)
		if(str[i] == str[strlen(str) - 1])
			fprintf(out, "%d ", i);
		
	fclose(out);
}

int main(int argc, char **argv)
{
	char stringFile[MAXELEMENTS];
	
	input(stringFile);

	output(stringFile);
	
	return 0;
}

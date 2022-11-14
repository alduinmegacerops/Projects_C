#include <stdio.h>
#include <string.h>

#define SIZE 10001

void input(char *strIn, char *strFin)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%s", strIn) == 1)
	{
		strcat(strFin, strIn);
		strcat(strFin, " ");
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
	char str[SIZE], strFinal[SIZE];
	
	input(str, strFinal);
	
	output(strFinal);

	return 0;
}

#include <stdio.h>
#include <string.h>

#define SIZE 1001

void input(char *surnameIn, char *nameIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	fscanf(in, "%s", surnameIn);
	fscanf(in, "%s", nameIn);
	
	fclose(in);
}

void output(char *surnameOut, char *nameOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "Hello, %s %s!", nameOut, surnameOut);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char name[SIZE], surname[SIZE];;
	
	input(surname, name);
	
	output(surname, name);

	return 0;
}

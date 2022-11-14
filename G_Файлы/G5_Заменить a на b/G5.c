#include <stdio.h>
#include <string.h>

#define MAXELEMENTS 1001

void input(char* strOut)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strOut) == 1);
		
	fclose(in);
}

void replacement(char * strRep)
{
	for(int i = 0; i < strlen(strRep); i++)
	{
		switch(strRep[i])
		{
			case 'a':
				strRep[i] = 'b';
				break;
			case 'b':
				strRep[i] = 'a';
				break;
			case 'A':
				strRep[i] = 'B';
				break;
			case 'B':
				strRep[i] = 'A';
				break;
			default:
				break;
		}
	}
}

void output(char* strIn)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "%s", strIn);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[MAXELEMENTS];
	
	input(str);

	replacement(str);

	output(str);
	
	return 0;
}

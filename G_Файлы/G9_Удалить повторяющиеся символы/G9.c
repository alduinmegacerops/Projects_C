#include <stdio.h>
#include <string.h>

#define SIZE 10001

void input(char *strOutIn)
{	
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strOutIn) == 1);
		
	fclose(in);
}

void removeRep(char *strRem)
{
	for(int i = 0; i < strlen(strRem); i++)
	{
		for(int j = i + 1; j < strlen(strRem); j++)
		{
			if(strRem[i] == strRem[j])
				strRem[j] = ' ';
		}
	}	
}

void removeSpace(char *strSpace, char *strNoSpace)
{
	int flag = 1, count = 0;
	
	for(int i = 0; i < strlen(strSpace); i++)
	{
		flag = 1;
		
		for(int j = i + 1; j < strlen(strSpace); j++)
		{
			if(strSpace[i] == ' ')
				flag = 0;
		}
		
		if(flag == 1)
			strNoSpace[count++] = strSpace[i];
	}
}

void output(char *strIn)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "%s", strIn);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[SIZE], strFinal[SIZE];
	
	input(str);
	
	removeRep(str);
	
	removeSpace(str, strFinal);
	
	output(strFinal);

	return 0;
}

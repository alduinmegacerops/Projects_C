#include <stdio.h>
#include <string.h>

#define SIZE 10001

void input(char *strIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strIn) == 1);
	
	fclose(in);
}

void swapStr(char *strInSwap, char *strFin)
{	
	char temp, buffer[SIZE];
	int count = 0;
	
	for(int i = 0; i < strlen(strInSwap); i++)
	{
		if(strInSwap[i] != ' ')
			buffer[count++] = strInSwap[i];
	}
	
	for(int i = 0; i < count; i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[i + 1];
		buffer[i + 1] = temp;
		i++;
	}
	
	if(count % 2 != 0)
		strcat(buffer, &buffer[count++]);
	
	count = 0;
	
	for(int i = 0; i < strlen(strInSwap); i++)
	{
		if(strInSwap[i] != ' ')
			strFin[i] = buffer[count++];
		else
			strFin[i] = ' ';
	}
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
	
	input(str);
	
	swapStr(str, strFinal);
	
	output(strFinal);

	return 0;
}

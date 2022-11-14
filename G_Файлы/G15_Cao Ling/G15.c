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

void changeName(char *strExt, char *buffer)
{
	int count = 0;
	
	for(int i =  0; i < strlen(strExt); i++)
	{	
		if(strExt[i] == 'C' && strExt[i + 1] == 'a' && strExt[i + 2] == 'o')
		{
			strcat(buffer, "Ling");
			
			count += 4;
			i += 3;
		}
		
		buffer[count++] = strExt[i];
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
	
	changeName(str, strFinal);
	
	output(strFinal);

	return 0;
}

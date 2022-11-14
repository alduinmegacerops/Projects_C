#include <stdio.h>
#include <string.h>

#define SIZE 21

void input(char *strIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strIn) == 1);
	
	fclose(in);
}

void soundex(char* strInSou, char *strOutSou)
{
	char buffer[21] = {0};
	int count = 0;

	buffer[0] = strInSou[0];
	
	for(int i = 1; i < strlen(strInSou); i++)
	{
		switch(strInSou[i])
		{
			case 'b':
			case 'f':
			case 'p':
			case 'v':
				strcat(buffer, "1");
				break;
			case 'c':
			case 'g':
			case 'j':
			case 'k':
			case 's':
			case 'x':
			case 'z':
				strcat(buffer, "2");
				break;
			case 'd':
			case 't':
				strcat(buffer, "3");
				break;
			case 'l':
				strcat(buffer, "4");
				break;
			case 'm':
			case 'n':
				strcat(buffer, "5");
				break;
			case 'r':
				strcat(buffer, "6");
				break;
		}
	}
	
	
	strOutSou[count++] = buffer[0];
	
	for(int i = 1; i < strlen(buffer) - 1; i++)
		if(buffer[i] != buffer[i + 1])
			strOutSou[count++] = buffer[i];

	if(strlen(strInSou) > 1)
		strOutSou[count++] = buffer[strlen(buffer) - 1];
	
	for(int i = count; i < 4; i++)
		strOutSou[i] = '0';
		
	printf("%s", strOutSou);
}

void output(char *strOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < 4; i++)
		fprintf(out, "%c", strOut[i]);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[SIZE], strFinal[SIZE];
	
	input(str);
	
	soundex(str, strFinal);
	
	output(strFinal);

	return 0;
}

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

void reverse(char *strInRev, char *strOutRev)
{
	for(int i = 0, j = strlen(strInRev) - 1; i < strlen(strInRev); i++, j--)
		strOutRev[i] = strInRev[j];
}

void polindrom(char* strInPol, char *strOutPol)
{
	char alphabet[26], firstHalfPol[SIZE], lastHalfPol[SIZE], buffer[SIZE];
	int countLetter[26] = {0}, count = 0, flag = 0;	
	
	for(int i = 0; i < 26; i++)
		alphabet[i] = 'a' + i;
	
	for(int i = 0; i < strlen(strInPol); i++)
	{
		for(int j = 0; j < 26; j++)
		{
			if(strInPol[i] == alphabet[j])
				countLetter[j]++;
		}
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(countLetter[i] >= 2)
		{
			for(int j = 0; j < countLetter[i] / 2; j++)
			{
				firstHalfPol[count] = alphabet[i];
				buffer[count++] = alphabet[i];
			}
			
			if(countLetter[i] % 2 != 0)
				countLetter[i] = 1;
			else
				countLetter[i] = 0;
		}
	}

	reverse(buffer, lastHalfPol);

	for(int i = 0; i < 26; i++)
	{
		if(countLetter[i] == 1)
		{
			flag = 1;
			strcat(strOutPol, firstHalfPol);
			strncat(strOutPol, &alphabet[i], 1);
			strcat(strOutPol, lastHalfPol);
			break;
		}
	}
	
	if(flag == 0)
	{
		strcat(strOutPol, firstHalfPol);
		strcat(strOutPol, lastHalfPol);
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
	
	polindrom(str, strFinal);
	
	output(strFinal);

	return 0;
}

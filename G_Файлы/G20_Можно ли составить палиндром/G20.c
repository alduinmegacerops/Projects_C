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

int polindrom(char* strInPol, char *strOutPol)
{
	char alphabet[26];
	int countLetter[26] = {0}, count = 0;	
	
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
			if(countLetter[i] % 2 != 0)
				countLetter[i] = 1;
			else
				countLetter[i] = 0;
		}
	}
	
	for(int i = 0; i < 26; i++)
		if(countLetter[i] == 1)
			count++;
			
	if(count <= 1)
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	char str[SIZE], strFinal[SIZE];
	
	input(str);
	
	if(polindrom(str, strFinal))
		printf("YES");
	else
		printf("NO");

	return 0;
}

#include <stdio.h>
#include <string.h>

#define SIZE 1001

void input(char *strIn)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(fscanf(in, "%[^\n]", strIn) == 1);
		
	fclose(in);
}

void reverse(char *strOrig, char *strRev)
{
	for(int i = strlen(strOrig) - 1, j = 0; i >= 0; i--, j++)
		strRev[j] = strOrig[i];
}

void uppercase(char *strOrigUp, char *strRevUp)
{
	for(int i = 0; i < strlen(strOrigUp); i++)
	{
		if(strOrigUp[i] >= 'a' && strOrigUp[i] <= 'z')
			strOrigUp[i] -= 0x20;
			
		if(strRevUp[i] >= 'a' && strRevUp[i] <= 'z')
			strRevUp[i] -= 0x20;
	}
}

int comparison(char *strOrigComp, char *strRevComp)
{
	for(int i = 0; i < strlen(strOrigComp); i++)
	{
		if(strOrigComp[i] != strRevComp[i])
			return 0;
	}
	
	return 1;
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
	char strDirect[SIZE], strReverse[SIZE];
	
	input(strDirect);
	
	reverse(strDirect, strReverse);
	
	uppercase(strDirect, strReverse);
	
	if(comparison(strDirect, strReverse))
		output("YES");
	else
		output("NO");
	
	return 0;
}

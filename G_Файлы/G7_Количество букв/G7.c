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

int uppercaseCount(char *strUp)
{
	int sumUp = 0;
	
	for(int i = 0; i < strlen(strUp); i++)
		if(strUp[i] >= 'A' && strUp[i] <= 'Z')
			sumUp++;
			
	return sumUp;
}

int lowercaseCount(char *strLow)
{
	int sumLow = 0;
	
	for(int i = 0; i < strlen(strLow); i++)
		if(strLow[i] >= 'a' && strLow[i] <= 'z')
			sumLow++;
			
	return sumLow;
}

void output(int countLow, int countUp)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	fprintf(out, "%d %d", countLow, countUp);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[SIZE];
	
	input(str);
	
	uppercaseCount(str);
	
	output(lowercaseCount(str), uppercaseCount(str));
	
	return 0;
}

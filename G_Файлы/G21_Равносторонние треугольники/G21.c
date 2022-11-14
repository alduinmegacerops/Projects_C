#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE 10001

void input(char *strIn)
{
	int count = 0;
	
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	while(!feof (in))
		strIn[count++] = fgetc(in);
	
	fclose(in);
}

void triangl(char *strInTri, char (*strOutTri)[90], double *height)
{
	int count = 0;
	double temp;
	
	for(int i = 0; i < strlen(strInTri); i++)
		if(strInTri[i] == '*')
			count++;
	
	*height = (sqrt(8 * count + 1) - 1) / 2;
	
	if(modf(sqrt(8 * count + 1), &temp) == 0 && count != 0)
	{
		for(int i = 0; i < *height; i++)
		{
			for(int j = i; j < *height - 1; j++)
				strcat(strOutTri[i], " ");
			
			for(int j = 0; j <= i; j++)
			{
				strcat(strOutTri[i], "*");
				strcat(strOutTri[i], " ");
			}
		}
	}	
	else
	{
		strcat(strOutTri[0], "NO");
		*height = 1;
	}
}

void output(char (*strOut)[90], double heightOut)
{	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 0; i < heightOut; i++)
		fprintf(out, "%s\n", strOut[i]);
	
	fclose(out);
}

int main(int argc, char **argv)
{
	char str[SIZE], strFinal[90][90];
	double countStr;
	
	input(str);
	
	triangl(str, strFinal, &countStr);

	output(strFinal, countStr);

	return 0;
}

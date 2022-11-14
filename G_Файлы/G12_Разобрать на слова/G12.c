#include <stdio.h>
#include <string.h>

#define SIZE 10001

int main(int argc, char **argv)
{
	char str[SIZE];
	
	FILE *in, *out;
	
	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");
	
	while(fscanf(in, "%s", str) == 1)
		fprintf(out, "%s\n", str);
		
	fclose(in);
	fclose(out);

	return 0;
}

#include <stdio.h>
#include <string.h>

void input(int* number)
{
	FILE *in;
	
	in = fopen("input.txt", "r");
	
	fscanf(in, "%d", number);
		
	fclose(in);
}

void output(int number)
{	
	int count = 0;
	
	FILE *out;
	
	out = fopen("output.txt", "w");
	
	for(int i = 1; i <= number; i++)
	{
		switch(i) 
		{
			case 10:
				count += 8;
				break;
				
			case 18:
				count += 8;
				break;
				
			case 26:
				count += 8;
				break;
			
			default:
				break;
		}
		if(i % 2 == 0)
		{
			fprintf(out, "%d", i - count);
		}
		else
			fprintf(out, "%c", 'A' + i/2);
	}
	
	fclose(out);
}

int main(int argc, char **argv)
{
	int inputNumber = 0;
	
	input(&inputNumber);
	
	if(inputNumber > 1 && inputNumber <= 26 && inputNumber % 2 == 0)
		output(inputNumber);
	
	return 0;
}

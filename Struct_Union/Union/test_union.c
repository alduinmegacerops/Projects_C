#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
	union intbytes {
		uint32_t number;
		float real;
		uint8_t bytes[4];
	} d;

	d.real = 3.14;
	printf ("Real  %f\n",d.real);
	printf ("Number  %x\n",d.number);    
	printf(" in memory is: %x %x %x %x\n", d.bytes[0], d.bytes[1], d.bytes[2], d.bytes[3]);


	
	return 0;
}


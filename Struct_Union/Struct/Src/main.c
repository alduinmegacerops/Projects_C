#include "..\Inc\main.h"

int main(int argc, char **argv)
{
	struct student course1[STUDEN_NUMBER]; // массив из 200 структур
	
	int number1 = AddCourse(course1);
    
    print(course1, number1);
    printf("Eldest student = %d\n", Eldest(course1, number1));
	
	char* name = {"Ivan"};
	printf("Name %s number = %d\n", name, SameNameNumber(course1, number1, name));
	
	printf("Same surname number = %d\n", Namesakes(course1, number1));
	
	return 0;
}

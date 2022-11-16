#include "..\Inc\main.h"

void AddStudent(struct student* course, int number, char* surname, char* name, int age)
{
	course[number].age = age;
	strcpy(course[number].name, name);
	strcpy(course[number].surname, surname);
}

int AddCourse(struct student* course)
{
	int c=0;  
    
    AddStudent(course, c++, "Ivanov", "Ivan", 18);
    AddStudent(course, c++, "Petrov", "Ivan", 19);
    AddStudent(course, c++, "Petrov", "Ivan", 19);
    AddStudent(course, c++, "Petrov", "Ivan", 19);
    AddStudent(course, c++, "Petrov", "Ivan", 19);
    AddStudent(course, c++, "Ivanov", "Vasily", 44);
    
    return c;
}

void print(struct student* course, int number)
{
	for(int i = 0 ; i < number; i++)
		printf("%s\t%s\t%d\n", course[i].surname, course[i].name, course[i].age);
}

//возраст самого старшего человека; 
int Eldest(struct student* course, int number)
{
	int max = course -> age;
	
	for(int i = 1; i < number; i++)
		if(max < (course + i) -> age)	//course[i].age = (course + i) -> age
			max = (course + i) -> age;
	
	return max;
}

//количество людей с заданным именем (имя также является параметром функции);
int SameNameNumber(struct student* course, int number, char* name)
{
	int counter = 0;
	
	for(int i = 0; i < number; i++)
		if(!strcmp(course[i].name, name))
			counter++;
	
	return counter; 
}

//количество людей, у которых есть однофамильцы;
int Namesakes(struct student* course, int number)
{
	int counter = 0;
	
	for(int i = 0; i < number; i++)
		for(int j = i + 1; j < number; j++) 
			if(!strcmp(course[i].surname, course[j].surname))
			{
				counter++;
				break;
			}
	
	return counter;
}

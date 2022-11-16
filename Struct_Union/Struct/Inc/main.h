#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define STR_SIZE 30
#define STUDEN_NUMBER 200

struct student {
	char surname[STR_SIZE];     
	char name[STR_SIZE];   
	uint8_t age;            
};

void AddStudent(struct student*, int, char*, char*, int);

int AddCourse(struct student*);

void print(struct student*, int);

//возраст самого старшего человека; 
int Eldest(struct student*, int);

//количество людей с заданным именем (имя также является параметром функции);
int SameNameNumber(struct student*, int, char*);

//количество людей, у которых есть однофамильцы;
int Namesakes(struct student*, int);

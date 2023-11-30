#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student
{
	int ID;
	char name[10];
	float grade;
};

int main(int argc, char *argv[]) {
	struct student s1={123, "juy", 4.3};
	s1.ID= 123456;
	s1.name[10] = "juyeop";
	s1.grade = 4.2;	
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	strcpy(s1.name, "bongjun");
	printf("name : %s\n", s1.name);
	
	return 0;
	
}

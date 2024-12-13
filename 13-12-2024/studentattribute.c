#include<stdio.h>
#include<string.h>


struct student{
	char name[20];
	int rollno;
	float marks;
};

int main(){
	struct student s1={"hello",569,98.23};
	struct student s2,s3;
	
	// taking user input
	// for accessing the attribute of structure we will use dot operator
	
	strcpy(s2.name,"world"); //this will work as well: s2.name="world"
	s2.rollno = 569;
	s2.marks = 97.66;
	
	
	//taking user input
	printf("Enter name, roll number and marks of student3\n");
	scanf("%s%d%f",s3.name,&s3.rollno,&s3.marks);
	
	
	
	// printing the values
	
	printf("student1: %s \t %d \t %f\n",s1.name,s1.rollno,s1.marks);
	printf("student2: %s \t %d \t %f\n",s2.name,s2.rollno,s2.marks);
	printf("student3: %s \t %d \t %f\n",s2.name,s3.rollno,s3.marks);
	
	return 0;
	
}

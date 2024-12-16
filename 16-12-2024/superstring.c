#include<stdio.h>

int main(){

	char s1[20] = {'A','y','o','n','a','\0'};
	char s2[20] = {'A','s','i','m','\0'};
	char s3[20] = "black hole";
	char s4[]="computer science";
	char *cp="super string";
	char s5[20];
	printf("s1: %s\n",s2);
	printf("s3: %s\n",s3);
	printf("cp: %s", cp);
	printf("Enter name of student 5 \n");
	scanf("%s",s5);
	scanf("%[^\n]",s6);
	printf("s1[0] = %c, s2[1] = %c, s3[2] = %c, cp[3] = %c", s1[0],s2[1],s3[2], cp[3]);
	printf("%s\n",s5);
	printf("%s",s6);
	
	}

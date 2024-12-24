#include <stdio.h>
#include <stdlib.h>
int main(){
	char *str;
	int length,i;
	str=(char*)malloc(100*sizeof(char));
	if(str==NULL){
		printf("Memory not allocted\n");
	}
	printf("Enter a string:");
	scanf("%s",str);
	length=strlen(str);
	printf("Revered string:");
	for(i=length-1;i>=0;i--){
		printf("%c",str[i]);
	}
	printf("\n");
	free(str);
	return 0;
}

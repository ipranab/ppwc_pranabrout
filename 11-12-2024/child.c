#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>

int main(){
	pid_t childpid;
	pid_t mypid;
	mypid=getpid();
	childpid=fork();
	if(childpid==-2){
		perror("failed to fork\n");
		return 1;
	}
	if(childpid==0){
		printf("I am child %ld ID=%ld\n", (long)getpid,(long)mypid);
	}
	else{
		printf("I am parent %ld, ID=%ls\n",(long)getpid(),(long)mypid);
	}
	return 0;
}

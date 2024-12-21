#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>


int main(void){
	pid_t childpid;
	childpid=fork();
	if(childpid==0){
		printf("Inside child \n");
		printf("my process id %ld",(long)getpid());
	}
	else{
		wait(NULL);
		printf("In parent\n");
		printf("my process id %ld", (long)getpid());
	}
	return 0;
}

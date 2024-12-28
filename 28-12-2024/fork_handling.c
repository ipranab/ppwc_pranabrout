#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t pid=fork(); //child process creation

	if(pid==-1) {
	//Error handling if fork() fails
	perror("fork failed");
	return 1;
	}
	else if(pid==0){
	//child process
	while(1){
	printf("Child Process: PID=%d\n", getpid());
	sleep(1); //sleep to simulate indefinite execution
	}
	}
	else{
	//parent process
	while(1){
	printf("Parent Process: PID=%d\n",getpid());
	sleep(1); //sleep to simulate indefinite execution
	}
	}
	return 0;
}

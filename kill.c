#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int main()
{
	int i=0;
	int parent = 0;
	i=fork();

	if (i==0)
	{
		printf("I am child process with pid:%d\n",getpid());
		printf("My parent process iD:%d\n",getppid());
		parent =getppid();
		kill(parent,SIGKILL);
		sleep(8);
		printf("I am still here doing my work\n");
	}
	
	else
	{
		printf("I am parent with process ID:%d\n",getpid());
		sleep(6);
		printf("Am I alive\n");
	}
}

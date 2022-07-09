#include<stdio.h>
#include<unistd.h>



int main()
{
	int i=100;
	i=fork();

	if (i==0)
	{
		printf("--------------\n");
		printf(" I am the child \n");
		sleep(2);
		printf(" Here is my PID: %d\n",getpid());
		printf(" Oh! take my PPID:%d\n",getppid());
	}

	else
	{
		sleep(5);
		printf(" I am the parent\n");
		printf("Here is my  PID:%d\n",getpid());
		printf(" take my PPID:%d\n",getppid());
		printf("----------------\n");
	
	}

	return 0;

}




#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main()
{
	
	//program to check for the Zombie process
	
	int i=100;

	i=fork();
	if (i==0)
	{
		printf("I am a child,my pid is=%d\n",getpid());
		sleep(25);
		printf("I was zombie for a brief period of time\n");
	
	}
	else{
		printf("I am Parent, and my pid is=%d\n",getpid());
		sleep(20);
		printf("I am leaving my task is done\n");
	
	}

	return 0;
	//Kill child when parent is in sleep and then check for the zombie process with command ps -ax
}

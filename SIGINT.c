#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void funca()
{
	printf("Maine kaam karna chor dia SIGINT k lie\n");
}


int main()
{

	int i=0;
	int pid=0;

	signal(SIGINT,funca);

	pid=getpid();

	for(i=0;1;i++)
	{
		printf("%d running since %d seconds\n", pid,i);
		sleep(1);
	}

	return 0;
}






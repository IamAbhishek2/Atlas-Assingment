#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<fcntl.h>



int main()

{
	int i=0;
	int pid=0;
	pid =open("lunch",O_WRONLY);
	write(pid,"I_am_the_King",6);
	for (i=0;1;i++)
	{
		printf("%d running since %d seconds\n",pid,i);
		sleep(1);
		kill(pid,SIGSTOP);
		sleep(1);
	}
	return 0;

}





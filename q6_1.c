#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<fcntl.h>


int  sig_handler()
{


	printf("received SIGSTOP\n");
	return 0;
}


int main()
{

	int pid=10;
	static char buf[20];
	printf("read process in opening the file for reading\n");
	sleep(2);
	pid = open("lunch",O_RDONLY);
	printf("read process is going to read\n");
	read(pid,buf,9);
	printf("read data is ---->%s\n",buf);
	kill(pid,sig_handler);
	close(pid);
	

	return 0;

}






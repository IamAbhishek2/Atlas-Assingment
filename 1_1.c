#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	
	//programme for creating a file using open system call.

	int fd=0;
	static char buf[50];
	fd = open("run.txt", O_CREAT, 0644);
	write(fd,"I am ready for the GAME!!\n ", 25);
	printf("The data is written,now check the file \n");
	close(fd);
	return 0;
}





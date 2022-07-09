#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
	static char* av[50];

			
	int fd = open("hello.txt",O_RDONLY);
	int size =lseek(fd,0,SEEK_END);


	printf("Total Size: %d\n",size);

	close(fd);

	return 0;	
}




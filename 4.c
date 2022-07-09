#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main()

{
	int fd =0; 
	int fda = 0;
	int ret=0;
	static char buffer[40];
	fd = open("hello.txt",O_WRONLY);
	write(fd, " Am I writable ", 10);
	printf("Write function won't work permission issue %d\n", fd);
	sleep(2);
	fda = open("hello.txt",O_RDONLY);
	read(fda, buffer,26);
	printf("Below are the details of the file,%s\n",buffer);
	sleep(2);
	lseek(fda,7,SEEK_CUR);
	read(fda,buffer,25);
	printf("Details of the file:%s\n",buffer);
	close(fda);
	close(fd);
	
	
}






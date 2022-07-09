#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>



int main()

{
	///N0t completed till now doubt
	

	int fd =0; 
	int fda = 0;
	int ret=0;
	static char buffer[40];
	fd = open("hello.txt",O_RDWR);
	read(fd, buffer,26);
	fda = open("hello.txt",O_RDWR | head -c 10);
	sleep(2);
	ret = read(fda,buffer,25);
	lseek(ret,15,SEEK_CUR);
	printf("Details of the file:%s\n",buffer);
	close(fda);
	close(fd);
	
	
}






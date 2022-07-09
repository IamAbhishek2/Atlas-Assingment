#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fda=0;
	static char buf[60];
	fda = open("hello.txt",O_RDONLY);
	read(fda,buf,16);
	sleep(2);
	printf("Read data is %s\n",buf);
	printf("Hey, looks my fda is %d\n",fda);
	return 0;

}



#include<stdio.h>
#include<unistd.h>


int main()
{
	
	//Programme for the orphan process.

	int i=100;
	i=fork();
	if(i>0)
	{
		printf("In parent process\n");
	}
	else if(i ==0)
	{
		sleep(30);
		printf("In a child Process\n");
	}
	
	
	return 0;

}



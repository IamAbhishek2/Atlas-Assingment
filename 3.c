#include<stdio.h>
#include<stdlib.h>



int main()
{
	//Programme for opening the file using absolute path
	
	char buffer[30],c;
	static char filename[]="/home/abhishek/Desktop/captain/Assingment_5/hello.txt";
	char* dest =realpath(filename, NULL);
	FILE* path = fopen(filename,"r");

	if(dest == NULL){
		printf("cannot find the path name[%s]\n",filename);
	}else{
		printf("dest[%s]\n",dest);
		while((c=getc(path))!=EOF)
			printf("%c",c);
		fclose(path);
		free(dest);
	
	}

	return 0;
}



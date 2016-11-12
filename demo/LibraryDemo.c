#include"LibraryInclude.h"
#include <stdio.h>


struct  A
{
	char buf[100];
};

int main()
{
	FILE *fileFd=fopen("myInputFile.txt","r");
	if(fileFd == NULL)
	{
		printf("File cannot be opened\n");
		return 0;
	}
	else
	{
			printf("File opened!\n");	
	}
	struct A obj[10];
	
	int i=0;
	
	while(getSingleLine(obj[i].buf,fileFd))
	{
			printf("%s\n",obj[i].buf);
			++i;
	}
	
	fclose(fileFd);


}
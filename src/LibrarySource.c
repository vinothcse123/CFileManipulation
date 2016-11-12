#include"LibraryInclude.h"
#include <stdlib.h>
#include <stdio.h>



int getSingleLine(char *p_storageArea,FILE* p_fileFd)
{
	
	if(NULL == fgets(p_storageArea,MAX_SINGLE_LINE_BUFFER_LENGTH,p_fileFd))
	{
		return 0;
	}
	
	return 1;			
}
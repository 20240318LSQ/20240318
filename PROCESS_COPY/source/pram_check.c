#include <process_copy.h>

int pram_check(char* filename, int argc, int pronum)
{
	if(access(filename,F_OK)!=0)
	{
       perror("src not exit");
	   return 0;
	}
	else if(argc<3)
	{
		perror("number error");
		return 0;
	}
	else if(pronum<6||pronum>100)
	{
       perror("pronum error");
	   return 0;
	}
	else
	{
		return 1;
	}
}
